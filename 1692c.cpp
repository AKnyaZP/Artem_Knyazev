#include <iostream>
#include <string>
#include <vector>
int main(){
    int t;
    std::cin >> t;
    std::string s;
    while (t > 0){
        std::vector<std::string>V;
        int n = 8;
        while (n > 0){
            std::cin >> s;
            n --;
            V.push_back(s);
        }
        int x, y;
        int count = 0;
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (V[i][j] == '#' && V[i][j+2] == '#') {
                    x = i;
                    y = j + 2;
                    break;
                }
            }
        }
        std::cout << x << " " << y << '\n';
        t --;
    }
}