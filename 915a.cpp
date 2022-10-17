#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, k, a;
    std::cin >> n >> k;
    int d = n;
    std::vector<int>V;
    while (n > 0){
        std::cin >> a;
        V.push_back(a);
        n -= 1;
    }
    std::sort(V.begin(), V.end());
    for (int i = d - 1; i >= 0; i --){
        if (k % V[i] == 0){
            std::cout << k / V[i];
            break;
        }
    }
}