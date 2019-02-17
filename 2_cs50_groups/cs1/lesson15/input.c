#include <stdio.h>

int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    printf("Usage: cat file [file ...]\n");
    return 1;
  }
  for (int i = 1; i < argc; i++)
  {
    FILE* file = fopen(argv[1], "r");
    if(file == NULL) //Перевіряємо чи відкрито файл
    {
      printf("cat: %s: No such file or directory\n", argv[i]);
      return 1; //Якщо файл не відкрито, отже він не існує - помилка
    }
    //Цикл, у якому зчитуємо символи з файлу
    for(int c = fgetc(file); c != EOF; c = fgetc(file))
    {
      putchar(c); //Виведення символу на екран
    }
    fclose(file);
  }
  return 0;
}