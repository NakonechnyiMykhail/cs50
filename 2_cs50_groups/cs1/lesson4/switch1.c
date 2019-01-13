// switch

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for answer
    int number = get_char("answer: ");

    // Check answer
    switch (number)
    {
        case 'Y':
            printf("YES");
        case 'y':
            printf("yes\n");
            break;
        case 'N':
        case 'n':
            printf("no\n");
            break;
    }
}
