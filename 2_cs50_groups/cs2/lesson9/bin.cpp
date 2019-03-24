#include <iostream>

using namespace std;

void binarySearch(int arr[], int left, int right, int x);

int main(void)
{
    int list[] = {1, 2, 5, 7, 9, 13, 14, 17, 19, 21, 25, 29, 36, 45, 53, 55, 78};
    int n = sizeof(list)/sizeof(list[0]);

    int x = 0;
    cin >> x;
    cout << "We have " << n << " elements. We are searching " << x << "at index : ";

    binarySearch(list, 0, n-1, x);

    return 0;
}

void binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int middle = left + (right - left) / 2;
        if (arr[middle] == x) {
            cout << middle << endl;
        } else if (arr[middle] > x) {
            binarySearch(arr, left, middle - 1, x);
        } else {
            binarySearch(arr, middle + 1, right, x);
        }
    }
    else
    {
        cout << "Element not found" << endl;
    }

}