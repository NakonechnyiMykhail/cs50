#include <iostream>

int main(void){
    char str1[] = "cs50";
    char str2[] = {'c','s','5','0','\0'};

    std::cout << str1 << '\t' << str2 << std::endl;

    return 0;
}