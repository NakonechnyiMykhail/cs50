#include <iostream>
#include <cstring>
#include <fstream>

int main(void){
    std::string line;
    std::ifstream file2 ("test.txt");
    if(file2.is_open()){
        while ( getline(file2, line) )
        {
            std::cout << line << std::endl;
        }
        file2.close();
    } else std::cout << "unable to open file 2";


    return 0;
}