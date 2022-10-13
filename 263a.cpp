#include <iostream>
int main() {
	int x = 0;
	int i, j, mini, count;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			std::cin >> x;
			if (1 == x) {
				mini = abs(3 - i) + abs(3 - j);
 
			}
		}
	}
	std::cout << mini;
}