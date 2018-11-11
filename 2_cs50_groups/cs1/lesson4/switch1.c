// switch

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for answer
    int number = get_int("answer: ");

    // Check answer
    switch (number)
    {
        case 1:
            printf("output 1\n");
        case 'y':
            printf("yes\n");
            break;
        case 'N':
        case 'n':
            printf("no\n");
            break;
    }
}
