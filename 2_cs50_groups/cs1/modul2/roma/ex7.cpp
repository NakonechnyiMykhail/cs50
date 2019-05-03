#include <iostream>
using namespace std;

int read_arr(int arr[]){
    for(int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << ", ";
    }
}

int main(){
    int arr[] = {10, 7, 6 , 8, -5, 1, -1};

    for(int i = 1; i < (sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i] % 2 == 0){
            arr[i] = arr[i-1]/3;
        }
        else{
            arr[i] = arr[i-1]*2;
        }
    }

    read_arr(arr);

}