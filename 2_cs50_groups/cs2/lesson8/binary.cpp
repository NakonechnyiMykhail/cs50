#include <iostream>

using namespace std;

int binarySearch(int arr[], int left, int right, int x);

int main(void)
{
    int list[] = {1, 2, 5, 7, 9, 13, 14, 17, 19, 21, 25, 29, 36, 45, 53, 55, 78};
    int n = sizeof(list)/sizeof(list[0]);

    int x = 0;
    cin >> x;
    cout << "We have " << n << " elements. We are searching " << x << endl;

    int result = binarySearch(list, 0, n-1, x);

    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index: " << result << endl;

    return 0;
}

int binarySearch(int arr[], int left, int right, int x)
{
    if (right >= left)
    {
        int middle = left + (right - left) / 2;
        if(arr[middle] == x) return middle;

        if (arr[middle] > x)
            return binarySearch(arr, left, middle - 1, x);
        else
            return binarySearch(arr, middle + 1, right, x);
    }
    return -1;
}