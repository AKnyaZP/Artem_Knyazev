#include <iostream>
int main() {
	int t, x, n;
	int i = 1;
	int min = 0;
	int p = 1;
	std::cin >> t;
	while (t > 0){
		std::cin >> n;
		x = n;
		while (x != 0) {
			if (0 != x % 10) {
				min += 1;
			}
			x /= 10;
		}
		std::cout << min << std::endl;
		if (1 == min) {
			std::cout << n << std::endl;
		}
		else {
			while (n != 0) {
				if (0 != n % 10) {
					std::cout << (n % 10) * p << " ";
				}
				n /= 10;
				p *= 10;
			}
			std::cout << std::endl;
			p = 1;
		}
		min = 0;
		t -= 1;
	}
 
}