#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = (int)s[0];
    if ((a >= 97) && (a <= 122)){
        a -= 32;
        char b = a;
        string new_s = "";
        new_s += b;
        for (int i = 1; i < s.length(); i++){
            new_s += s[i];
 
        }
        cout << new_s;
    }
    else{
        cout << s;
    }
 
 
}