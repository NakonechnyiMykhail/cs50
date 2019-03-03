#include <iostream>

void function(int a = 1){
    std::cout << a * a << std::endl;
}

int main(){
    function();

    return 0;
}