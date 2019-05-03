#include <iostream>
#include <cstdlib>
#include <ctime>

int randrange(int low,int high);

int main(void){
    int n = 10;
    int array[n];
    srand(time(0));
    for (int i = 0; i < n; i++){
        array[i] = randrange(-10, 10);
    }

    for (int i = 0; i < n; i++)
        std::cout << array[i] << '\t';

    std::cout << std::endl;
    return 0;
}

int randrange(int low,int high)
{

    return rand()%(high-low+1)+low;
}