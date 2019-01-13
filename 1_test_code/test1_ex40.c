#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int years       = 0;
    int currentYear = 0;
    int counter     = 0;
	time_t now;
	time(&now);

	struct tm *local = localtime(&now);

    currentYear = local->tm_year + 1900;	// get year since 1900


    do{
        if ( counter == 0) {
            printf("Year of your birthday: ");
        } else {
            printf("Please, enter the current year between 1900 and %d \n Year of your birthday: ", currentYear);
        }
        scanf("%i", &years);
        i++;
    } while(years < 1900 && years <= currentYear && counter < 3); // add exception to i <5 another throw -> so many times

    // add exception to varieble "year" > 0 another throw "negative year"
    years = currentYear - years;

    // some fun
    // if(years >= 1000){
    //     printf("GOD: %i years \n", years);
    // }

    if (years > 0 && years <= 3) {
        printf("Baby, %i years\n", years);
    } else if(years > 3 && years <= 18) {
        printf("Younger, %i years\n", years);
    } else if(years >= 19 && years <= 49) {
        printf("Middle, %i years\n", years);
    } else if(years >= 50 && years <= 89) {
        printf("Older, %i years\n", years);
    } else if(years >= 90 & years <= 117) {
        printf("You are SuperMan, %i years\n", years);
    } else {
        printf("Sorry, we can not help you now! Try again later!\n");
    }

}