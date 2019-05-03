#include <iostream>
#include <cstdlib>
#include <ctime>

int linearSearch(int arr[], int n, int x);
int randrange(int low,int high);
void swap(int *a, int *b);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int size);


int main(void){
    int n = 10, number = 0, max = 0, min = 0;
    int array[n];
    int array1[n];
    int array2[n];
    int array3[n];
    int array4[n];
    srand(time(0));

    for (int i = 0; i < n; i++){
        array[i] = randrange(-10, 10);
        array1[i] = 0;
        array2[i] = 0;
        array3[i] = 0;
        array4[i] = 0;
    }

    for (int i = 0; i < n; i++)
        std::cout << array[i] << '\t';

    std::cout << std::endl;
    //1
    for (int i = 0; i < n; i++)
        array1[i] = (array[i] % 2 == 0) ? array[i]/3 : 2*array[i];

    //2
    max = array1[0];
    for (int i = 0; i < n; i++)
    {
        if (max < array1[i])
            max = array1[i];
    }
    min = array1[0];
    for (int i = 0; i < n; i++)
    {
        if (min > array1[i])
            min = array1[i];
    }
    std::cout << "max = " << max << std::endl;
    std::cout << "min = " << min << std::endl;
    //3
    for (int i = 0; i < n; i++)
        array2[i] = array1[i];

    bubbleSort(array2, n);
	printArray(array2, n);

	//4
	std::cout << std::endl;
	std::cout << "enter the number what you want to find" << std::endl;
	std::cin >> number;
	std::cout << "element found at index: " << linearSearch(array2, n, number) << std::endl;

    return 0;
}


int randrange(int low,int high)
{
    // bool check = true;
    // for (int j = 0 ; (check) && (j < i) ; j++) {
    //     check = (num[i] != num[j]);
    // }
    return rand()%(high-low+1)+low;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int n) {
	bool swapped;
	for (int i = 0; i < n-1; i++) {
		swapped = false;
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << '\t';
}

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;

    return -1;
}