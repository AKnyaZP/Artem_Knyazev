#include <iostream>
#include <string>

int maxi(int a, int b){
    if (a >= b)
        return a;
    else if (a <= b)
        return b;
}
int mini(int a, int b){
    if (a <= b)
        return a;
    else if (a >= b)
        return b;
}


int main() {
    std::string s1, s2;
    s1 = "test";
    s2 = "west";
    int max = maxi(s1.size(), s2.size());
    int min = mini(s1.size(), s2.size());
    int k = 0;
    std::string a;
    for (int i = 0; i < (max - min); ++i){
        a += '0';
    }
    if (s1.size() <= s2.size())
        s1 = a + s1;
    else if (s2.size() <= s1.size())
        s2 = a + s2;


    for (int i = max - 1; i >= 0; --i) {
        if (s1[i] == s2[i]){
            k += 1;
        }
    }
    int count = s1.size() - k + s2.size() - k - a.size();
    std::cout << count;
}