#include <stdio.h>

#define STUDENTS 3

int main(void) {
  int scores [] = { 96, 90, 83 };
  FILE* file = fopen("lesson/database.txt", "a"); //Відкриваємо файл
  if (file != NULL) //Якщо файл відкрито
  {
    for (int i = 0; i < STUDENTS; i++)
    {
      fprintf(file, "%i\n", scores[i]); //Записуємо дані
    }
    fclose(file); //Закриваємо файл
  } else {
    printf("file not found");
  }

}