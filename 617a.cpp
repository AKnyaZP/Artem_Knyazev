#include <iostream>
int main(){
    int s = 0;
    std::cin >> s;
    int n = s/5;
    if (0 != s % 5){
        n += 1;
    }
    std::cout << n;
    return 0;
}