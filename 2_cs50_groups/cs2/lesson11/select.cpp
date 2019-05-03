#include <iostream>

void sort(int array[], int size);

int main(void){
    int array[10] = {2, 5, 7, 3, 23, 9, 6, 12, 16, 11};
    int n = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;

    sort(array, n);

    for (int i = 0; i < n; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;



    return 0;
}

void sort(int array[], int size)
{
	//Пройти по масиву
	for(int i = 0; i < size - 1; i++)
	{
		//Найменший елемент у відсортованій частині
		int smallest = array[i];
		int position = i;

		//Пройти по невідсортованій частині масиву
		for (int k = i + 1; k < size; k++)
		{
			// Знайти наступний найменший елемент
			if(array[k] < smallest)
			{
				smallest = array[k];
				position = k;
			}
		}

		//Обміняти місцями
		int temp = array[i];
		array[i] = smallest;
		array[position] = temp;
	}
}