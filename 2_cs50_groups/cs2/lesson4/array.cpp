#include <iostream>

using namespace std;

// #define SIZE 10

const int NUMBER = 10;

int main(int argc, const char * argv[]) {
    //int argc, string argv[]
    int n = 0;
    cout << "Enter the number of array" << endl;
    cin >> n;

    int arr[NUMBER];
    for(int i = 1; i <= NUMBER; i++) {
        // arr[i] = 0;
        arr[i] = i * n;
        cout << arr[i] << endl;
    }

    return 0;
}