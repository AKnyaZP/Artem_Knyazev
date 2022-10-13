#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
 
 
int main() {
	const double PI = std::acos(-1.0);
	int n, r;
	double R;
	std::cin >> n >> r;
	R = (r*((std::sin(PI/n))/(1 - std::sin(PI/n))));
	std::cout << std::setprecision(10);
	std::cout << R;
}