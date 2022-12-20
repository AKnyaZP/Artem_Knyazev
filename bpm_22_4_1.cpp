#include <iostream>
#include <cmath>
#include <fstream>

long factorial(int a){
    long long z = 1;
    for (int i = 1; i <= a; ++i)
        z *= i;
    return z;

}

int main() {
    double x = 0.2;
    double eps = 0.0001;
    int i = 2;
    std::ofstream fout("summ.txt");
    long long a = (pow(0.15, 2)) / 2;
    std::cout << 0.15 << " " << a << '\n';
    while (a >= eps || x <= 1){
        a += (pow(x, 2*i)) / factorial(2 * i);
        std::cout << x << " " << a << '\n';
        x += 0.05;
        i ++;
    }
}