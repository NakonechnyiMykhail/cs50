// Printing a command-line argument

#include <cs50.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc == 3)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
    // for(int i = 0; i < argc; i++)
    //     printf("%s\t", argv[i]);
    // printf("\n");
    //cout << argv[i] << "\t";
}


