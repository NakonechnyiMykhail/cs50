#include <iostream>
#include <fstream>
#include <cstring>

int fibo (int number);

int main (void){
    int n = 0;
    std::ofstream file ("fibo.txt");
    std::cout << "enter the max number of fibonacci" << std::endl;
    std::cin >> n;
    fibo(n);
    if(file.is_open()){
        for(int i = 0; i <= n; i++){
            file << fibo(i) << std::endl;
        }
        file.close();
    } else std::cout << "unable to open file";

    return 0;
}

int fibo(int number){
    if (number <= 1)
        return number;
    return fibo(number-1) + fibo(number-2);
}