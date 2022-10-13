#include <iostream>
 
int main() {
	long long k, n, w;
	std::cin >> k >> n >> w;
	for (int i = 1; i <= w; i ++) {
		n -= (k * i);
	}
	if (n >= 0) {
		std::cout << 0;
	}
	else
		std::cout << (std::abs(n));
}