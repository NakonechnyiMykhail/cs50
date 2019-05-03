#include <iostream>
#include <cstring>
#include <fstream>

int main(void){
    std::ofstream file ("test.txt");
    std::string text;
    if(file.is_open()){
        std::cout << "enter text three times" << std::endl;
        int i = 0;
        while (i < 3){
            getline(std::cin, text);
            file << text << std::endl;
            i++;
        }
        file.close();
    } else std::cout << "unable to open file";

    return 0;
}