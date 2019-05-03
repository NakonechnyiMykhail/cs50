#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int linearSearch(int array[], int n, int number);

int main(void){
    int list[] = {5, 2, 22, 6, 11, 4, 15};
    int n = sizeof(list) / sizeof(list[0]);
    int x = 0;

    cout << "Enter the number: ";
    cin >> x;
    int a = 4;

    cout << "Element found at index: " << linearSearch(list, n, x) << endl;
    cout << "Element found at index: " << linearSearch(list, n, a) << endl;


    return 0;
}

int linearSearch(int array[], int n, int number){
    for (int index = 0; index < n; index++){
        if(array[index] == number) return index;
    }
    return -1;
}