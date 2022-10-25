#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t > 0) {
        std::string s;
        std::cin >> s;
        bool flag = true;
        for (int i = 0; i < s.length(); ++i){
            if (s[i] != '?')
                flag = false;
        }
        if (flag) {
            std::cout << s.length() << "\n";
            continue;
        }
        if (s[0] == '0') {
            std::cout << 1 << "\n";
            continue;
        }
        int j_end = 0;
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '1') {
                j_end = i;
                break;
            }
        }
        int j_begin = s.length() - 1;
        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '0') {
                j_begin = i;
                break;
            }
        }
        std::cout << std::abs(j_end - j_begin) + 1 << "\n";
        t --;
    }

}