#include <iostream>
 
int main() {
	int t;
	int m, n, sx, sy, d;
	std::cin >> t;
	while (t > 0) {
		std::cin >> n >> m >> sx >> sy >> d;
		if ((sx + d >= n && sy + d >= m) || (sx - d <= 1 && sy - d <= 1) || (sx - d <= 1 && sx + d >= n) || (sy - d <= 1 && sy + d >= m)) {
			std::cout << -1 << std::endl;
		}
		else {
			std::cout << n + m - 2 << std::endl;
		}
		t--;
	}
}