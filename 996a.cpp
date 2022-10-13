#include <iostream>
 
int main() {
	int count = 0;
	int n;
	std::cin >> n;
	while (n != 0) {
		while (n >= 100) {
			n -= 100;
			count++;
		}
		while (n >= 20) {
			n -= 20;
			count++;
		}
		while (n >= 10) {
			n -= 10;
			count++;
		}
		while (n >= 5) {
			n -= 5;
			count++;
		}
		while (n >= 1) {
			n -= 1;
			count++;
		}
	}
	std::cout << count;
}
