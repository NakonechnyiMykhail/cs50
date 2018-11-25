// switch

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for answer
    char c[30];
    for(int i = 0; i < 30; i++){
        c[i] = get_char();
    }

    // Check answer
    switch (char* c)
    {
        case 'Yes':
        // case 'y':
            printf("yes\n");
            break;
        // case 'N':
        // case 'n':
        //     printf("no\n");
        //     break;
    }
}
