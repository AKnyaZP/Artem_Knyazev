#include <iostream>
#include <cmath>
#include <fstream>
#include "coordinate.hpp"


struct state {
    rdec r = { 1.0,1.0 };
    rdec v = { 1.0,1.0 };
    rdec a = { 0.1,0.1 };
};



int main() {

    double k = 1;
    double dt = 1e-1;
    double t = 0;
    int n = 10000;
    std::ofstream fout("report.txt");

    rdec g;
    rdec rpred;

    state z{};
    for (int i = 0; i < n; ++i){
        rdec a{};
        rpred = (z.r - z.v) * dt;
        g = (z.r) * (-1) * (1/norm(z.r)) * (k/ (dot(z.r, z.r)));
        a = ((z.r) / std::pow(norm(z.r), 3));
        std::cout << a.x << " " << a.y << '\n';
        z.r = z.r + z.v * dt;
        z.v = z.v + z.a * dt + g * dt;


        if (i % 5 == 0){
            fout << z.r << " " << z.v << " " << z.a << '\n';
        }
    }

    fout.close();

}