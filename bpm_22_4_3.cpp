#include <iostream>

int maxi(int a, int b){
    if (a >= b)
        return a;
    else if (a <= b)
        return b;
}
int main(){
    std::string s1, s2;
    s1 = "testyujht";
    s2 = "west";
    int max = maxi(s1.size(), s2.size());
    int k = 0;
    int count = 0;
    for (int i = max - 1; i >= 0; --i){
        if (s1[i] == s2[i]) {
            k += 1;
            continue;
        }
        else if (k >= 1 && s1[i] != s2[i]){
                count = s1.size() - k + s2.size() - k;
            }
        }
    if (k == 0)
        count = s1.size() + s2.size();
    std::cout << count;
}