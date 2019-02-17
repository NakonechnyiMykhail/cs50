#include <stdio.h>
#include <math.h>

int cube(int input); //Прототип функції cube

int main(void)
{
    int x = 2;
    printf("x is %i\n", x);
    x = cube(x);
    printf("x is %i\n", x);
}

int cube(int input)
{
    return input * input * input;
    // return pow(input, 3);
}
