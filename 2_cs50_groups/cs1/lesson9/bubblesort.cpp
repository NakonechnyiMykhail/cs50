#include <iostream>
using namespace std;
const int SIZE = 20;

void buble (int mas[],int SIZE);

int main(){
    int mas[SIZE] = {5,4,3,2,1,6,3,9,10,22,55,64,13,26,81,666,73,97,110,22};
    for(int i = 0; i < SIZE; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    buble(mas,SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        cout << mas[i] << " ";
    }
}

void buble (int mas[],int SIZE){
    for(int i = 0; i < SIZE; i++) {
        for(int a = i+1; a < SIZE; a++) {
            if(mas[i] > mas[a]) {
                int x = mas[i];
                mas[i] = mas[a];
                mas[a] = x;
            }
        }
    }
}