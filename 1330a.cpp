#include <iostream>
#include <array>
 
int main() {
	const int max = 201;
	std::array <int, max> a{ 0 };
	int t, n, x, i, v;
	std::cin >> t;
	while (t > 0) {
		std::cin >> n >> x;
		for (i = 1; i <= n; i++) {
			std::cin >> v;
			a[v] += 1;
		}
		i = 1;
		while (i < 201) {
			if (a[i] == 0 && x != 0) {
				x -= 1;
			}
			else {
				if (a[i] == 0 && x == 0) {
					break;
				}
			}
			i += 1;
		}
		std::cout << i - 1 << "\n";
		for (i = 1; i <= 200; i++) {
			a[i] = 0;
		}
		t -= 1;
	}
}