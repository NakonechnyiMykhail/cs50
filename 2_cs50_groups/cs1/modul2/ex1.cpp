#include <iostream>

int main(void){
    for(int i = 1;;i++)
        std::cout << i << std::endl;

    while(true){
        int i = 0;
        std::cout << i << std::endl;
        i++;
    }

    do {
        int i = 0;
        std::cout << i << std::endl;
        i++;
    } while(true);


    return 0;
}