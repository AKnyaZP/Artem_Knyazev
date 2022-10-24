#include <iostream>
#include <string>

int main(){
    int n;
    std::string s;
    std::cin >> n;
    while (n > 0){
        std::cin >> s;
        bool flag = true;
        int count = 1;
        int count_res = 1;
        if (s[0] != s[1])
            flag = false;
        else if (s[s.length() - 1] != s[s.length() - 2])
            flag = false;
        else {
            for (int i = 0; i < s.length() - 2; ++i) {
                if ((s[i] != s[i + 1]) && (s[i + 1] != s[i + 2])) {
                    flag = false;

                }
            }
        }
        if (flag)
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
        n -= 1;
    }
}