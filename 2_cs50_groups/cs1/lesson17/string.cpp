#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char surname[20];
    char name[10] = {'V', 'l', 'a', 'd'};
    char name1[10] = {'V', 'l', 'a', 'd', '\0'};
    char name2[] = "Ivan";

    //cout << name << endl;
    // cout << name2 << endl;
    // cout << name + name2 << endl;

    cout << strlen(name) << endl;
    cout << name << endl;
    cout << strlen(name1) << endl;
    cout << name1 << endl;



    return 0;
}