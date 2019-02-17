#include <stdio.h>
#include <math.h>

int cube (int input); //Прототип функції cube
double cube (double input);

int main(void)
{
    int x = 2;
    // printf("x is %i\n", x);
    x = cube(x);
    // printf("x is %i\n", x);

    double y = 2.5;
    y = cube(y);
    // printf("y is %f\n", y);
}

int cube(int input)
{
    return input * input * input;
}

double cube(double input)
{
    return input * input * input;
}
