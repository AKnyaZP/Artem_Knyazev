#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int count = 0;
    while (n > 0){
        if (n&1)
            ++count;
        n >>= 1 ;
    }
    std::cout << count;
}