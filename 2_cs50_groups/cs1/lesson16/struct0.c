#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include "struct.h"

int main (void){
    int enrollment = get_int("enrollment:");
    student students[enrollment];

    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("name: ");
        students[i].age = get_string("age: ");
    }

    // for (int i = 0; i < enrollment; i++)
    // {
    //     printf("%s is %s years. \n", students[i].name, students[i].age);
    // }

    FILE *file = fopen("students.csv", "w");
    if (file)
    {
        for(int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s,%s\n",students[i].name, students[i].age);
        }
        fclose(file);
    }


}