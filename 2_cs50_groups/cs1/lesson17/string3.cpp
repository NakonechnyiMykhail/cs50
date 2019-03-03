#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[15];
    char color[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter you favorite: ";
    cin >> color;

    cout << "your name is " << name << ", and your favorite color is " << color << endl;


    return 0;
}