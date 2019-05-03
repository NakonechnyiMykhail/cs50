#include <iostream>
#include <string>
#include <cstring> // <string.h>
using namespace std;
int main(void){
    char message[100], ch;
    int i, key;
    // char text1 = {'t','e','x','t'};
    // char text2 = {'t','e','x','t',' ','i','s','\0'};
    // char text3 = "this is my book";
    // string t   = "text";
    // strlen(text3)
    cout << "Enter a message to decrypt: ";
    cin.getline(message, 100);
    cout << "Enter key: ";
    cin >> key;
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];

        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key; // ch -= key;
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        } else if(ch >= 'A' && ch <= 'Z'){
            ch -= key;
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }

    }
    cout << "Decrypted message: " << message << endl;
    return 0;
}