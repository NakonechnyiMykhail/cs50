#include <stdio.h>
#include <cs50.h>

#define CLASS_SIZE 3


int main(void){

    int temperature[CLASS_SIZE];

    printf("enter %i numbers\n", CLASS_SIZE);

    for(int i = 0; i < CLASS_SIZE; i++)
    {

        temperature[i] = get_int("enter the number: ");
        printf("%i\n",temperature[i]);
    }
}