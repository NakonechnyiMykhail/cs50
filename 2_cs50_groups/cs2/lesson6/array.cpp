#include <iostream>

using namespace std;

int main (int argc, const char *argv[])
{
    int n = 100;
    int arr[n];
    for(int a = 6, b = 0; a < n, b < n; 2*a, ++b){
        arr[b] = a*a - b*b;
        cout << arr[b] << endl;
    }
}