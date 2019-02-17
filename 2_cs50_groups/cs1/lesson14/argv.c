// Printing a command-line argument

#include <cs50.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    for(int i = 0; i < argc; i++)
        printf("%s\t",argv[i]);
    printf("\n");
}
