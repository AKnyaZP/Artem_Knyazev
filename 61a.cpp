#include <iostream>
#include <string>
int main() {
	std::string a, b;
	std::string c = "";
	std::cin >> a;
	std::cin >> b;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b[i]) {
			c += '0';
		}
		else {
			c += '1';
		}
	}
	std::cout << c;
}