#include <stdio.h>

void menu() {

}

void question (char choice[5]) {
    switch (choice[5])
    {
        case choice["fish"]:
            printf("Do you order FISH?\n");
        case choice["drink"]:
            printf("Do you order CHIPS?\n");
        case choice["chips"] :
            printf("Do you order DRINKS?\n");
        default :
            printf("Enter a valid choice: \n");
    }
}

main() {

    // menu();
    question("fish");

}