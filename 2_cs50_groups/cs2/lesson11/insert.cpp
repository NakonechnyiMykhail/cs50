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

 for(int i = 0; i <= size-1; i++){
 	int element = array[i];
 	int j = i;
 	while((j > 0) && (array[j-1] > element)){
 		array[j] = array[j-1];
 		j = j-1; // j -=1 // j--;
 	}
 	array[j] = element;
 }
}