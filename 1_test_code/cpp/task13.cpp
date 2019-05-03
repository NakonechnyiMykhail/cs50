#include <iostream>
#include <cstring>

using namespace std;

int main(void){
    int m = 30;

    char text[m];
    // cin >> text;
    cin.get(text, m);
    // for(char n = 0; n < m; n++){
    for(char n = 0; n < strlen(text); n++){
        cout << text[n] << endl;
    }

    return 0;
}