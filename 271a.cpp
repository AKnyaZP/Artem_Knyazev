#include <iostream>
int main(){
    int y = 0;
    std::cin >> y;
    int s1 = y / 1000;
    int s2 = y / 100 % 10;
    int s3 = y / 10 % 10;
    int s4 = y % 10;
    /*std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;*/
    for (y += 1; y <= 9999; y += 1){
         int s1 = y / 1000;
        int s2 = y / 100 % 10;
        int s3 = y / 10 % 10;
        int s4 = y % 10;
        if (s1 != s2 && s2 != s3 && s3 != s4 && s1 != s3 && s1 != s4 && s2 != s4){
            std::cout << y;
            break;
        }
    }
}