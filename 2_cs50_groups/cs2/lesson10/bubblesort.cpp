// Ініціалізувати лічильник
// повторювати
// {
//   Встановити лічильник на 0

//   Пройти в циклі весь масив
//     якщо n-те значення більше за n+1-ше
//       обміняти їх місцями
//       збільшити лічильник
// } поки (лічильник > 0)

#include <iostream>

using namespace std;

void bubbleSort(int array[], int n);

int main(void){
    int list[] = {5, 2, 22, 6, 11, 4, 15};
    int n = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < n; i++)
        cout << list[i] << " ";
    cout << endl;

    bubbleSort(list, n);
    for (int i = 0; i < n; i++)
        cout << list[i] << " ";
    cout << endl;

    return 0;
}

void bubbleSort (int array[], int n){
    for (int index = 0; index < n - 1; index++){
        int swaps = 0;

        for (int i = 0; i < n - 1 - index; i++){
            if(array[i] > array[i+1]){
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                swaps++;
            }
        }
        if(!swaps)
            break;
    }

}

