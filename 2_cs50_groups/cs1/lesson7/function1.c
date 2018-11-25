#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int x = 25;
    float y = 6.234;
    double z = 6.2342352362623423235236236234;
    short a = 234;
    string s = get_string("enter the number: ");

    // printf("size of x is %lu\n",sizeof(x));
    // printf("size of int type is %lu\n",sizeof(int));
    // printf("size of y is %lu\n",sizeof(y));
    // printf("size of float type is %lu\n",sizeof(float));
    // printf("size of z is %lu\n",sizeof(z));
    // printf("size of double type is %lu\n",sizeof(double));
    // printf("size of a is %lu\n",sizeof(a));
    // printf("size of short type is %lu\n",sizeof(short));

    printf("the size of number is %lu. The number is %i \n", sizeof(atoi(s)), atoi(s));
    return 0;
}