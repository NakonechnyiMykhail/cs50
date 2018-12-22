#include <iostream>

using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x) return i;

    return -1;
}

int main(void)
{
    int arr[] = {5, 2, 32, 5, 3, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    
    cout << "Enter the number: ";
    cin >> x;

    cout << "found at index: " << linearSearch(arr, n, x) << endl;

    return 0;
}