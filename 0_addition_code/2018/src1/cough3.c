// Abstraction with parameterization

#include <stdio.h>

void cough(int counter);

int main(void)
{
    cough(3);
}

// Cough some number of times
void cough(int counter)
{
    for (int i = 0; i < counter; i++)
    {
        printf("cough\n");
    }
}
