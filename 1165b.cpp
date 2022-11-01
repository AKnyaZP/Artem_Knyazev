#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> V(n);
    for (int i = 0; i < n; ++i)
        std::cin >> V[i];
    std::sort(V.begin(), V.end());
    int count = 0;
    int d = 0;
    for (int i = d; i < n; ++i){
            if (V[i] >= d + 1) {
                ++count;
                d += 1;
            }
    }
    std::cout << count;
}