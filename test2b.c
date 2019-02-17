#include <stdio.h>
#include <cs50.h>

int main(void) {

    //1
    for(int row = 0; row < 3; row++){
        for(int column = 0; column < 4; column++){
            printf("x");
        }
        printf("\n");
    }
    //2
    // for (int i = 0; ; i++){
    //     printf("%i \n",i);
    // }

    // while(true){
    //     printf("*");
    // }

    // do {
    //     printf("*");
    // } while (true);

    //3
    string name = get_string("Enter your name");
    int age = get_int("enter your age");
    if(age > 12)
        printf("%s\n", name);

    //4
    char symbol = get_char("Enter the character for Yes/No");
    switch(symbol){
        case 'Y':
        case 'y':
            printf("Yes\n");
            break;
        case 'N':
        case 'n':
            printf("No\n");
            break;
    }
    // int i = 0;
    // while(i<2){
    //     i = 1;
    //     printf("x");
    // }

}