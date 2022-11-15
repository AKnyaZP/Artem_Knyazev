#include <iostream>
#include <vector>
 
int main(){
    long long n, k;
    std::cin >> n >> k;
    std::vector<int> V(n);
    for (int i = 0; i < n; ++i)
        std::cin >> V[i];
    if (k > n)
        k -= (k - n);
    int d = 0;
    int c;
    for (int i = d; i < n; ++i) {
        for (int j = i + 1; j < k; j += 1) {
            if (V[j] > V[i]){
                c = V[j];
                d = j;
                std::cout << c;
                return 0;
            }
            else{
                std::cout << V[i];
                return 0;
            }
 
        }
    }
}