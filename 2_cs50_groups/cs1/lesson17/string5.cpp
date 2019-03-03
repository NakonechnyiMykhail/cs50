#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char name[15];
    int age = 0;

    cout << "Enter your name: ";
    cin.getline(name, 20);

    cout << "Enter your age: ";
    cin >> age;

    cout << "your name is " << name << ", and your age is " << age << " years old" <<  endl;


    return 0;
}