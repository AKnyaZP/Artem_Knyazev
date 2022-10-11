#include <iostream>
#include <vector>

int main() {
	int a, n, t;
	int k = 1;
	std::cin >> t;
	while (t > 0) {
		std::vector<int>V;
		std::cin >> n;
		int d = n;
		while (n > 0) {
			std::cin >> a;
			V.push_back(a);
			n -= 1;
		}
		bool flag = true;
		if (V[0] == 1)
			k += 1;
		for (int i = 1; i < d; i++) {
			if (V[i] && V[i - 1]) {
				k += 5;
			}
			else if (V[i]) {
				k += 1;
			}
			else if (!(V[i]) && !(V[i-1])) {
				std::cout << -1 << '\n';
				flag = false;
				break;
			}
		}
		if (flag)
			std::cout << k << '\n';
		t--;
		k = 1;
	}
}