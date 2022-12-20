#include <iostream>
#include <cmath>

long factorial(int a){
    long long z = 1;
    for (int i = 1; i <= a; ++i)
        z *= i;
    return z;

}

int main()
{
    double eps = 0.0001;

    for (double x = 0.1; x <= 1.05; x += 0.05) {

        int i = 0;
        double sum = 0;
        double a = std::pow(x, 2 * i) / factorial(2 * i);
        while (a >= eps) {
            sum += a;
            i++;
            a = std::pow(x, 2 * i) / factorial(2 * i);
        }
        std::cout << x << " " << sum << '\n';
    }

}