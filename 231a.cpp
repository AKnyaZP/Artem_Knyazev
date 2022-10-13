
#include <iostream>
 
int main() {
	int t;
	std::cin >> t;
	int a, b, c;
	int count = 0;
	int cff = 0;
	while (t > 0) {
		std::cin >> a >> b >> c;
		cff = a + b + c;
		if (cff >= 2) {
			count++;
		}
		//cff = 0;
		t--;
	}
	std::cout << count;
}