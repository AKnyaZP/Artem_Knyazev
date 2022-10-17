#include <iostream>
#include <vector>
int main(){

    int n;
    std::cin >> n;
    std::vector<int>V(n);
    for (int i = 0; i < n; ++i){
        int el;
        std::cin >> el;
        V[el - 1] = i + 1;
    }
    for (int e : V)
        std::cout << e << " ";
}