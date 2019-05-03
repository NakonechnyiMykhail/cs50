#include <iostream>

using namespace std;

int main(void){
    char message[100], ch;
    int i, key;

    cout << "Enter a message to encrypt: ";
    cin.getline(message, 100);
    cout << "enter key: ";
    cin >> key;

    char mess[] = {'h','e','l','l','o','\0'};

    for (i = 0; message[i] != '\0'; ++i){
        ch = message[i];

        if(ch >= 'a' && ch <= 'z'){
            ch += key;
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            message[i] = ch;
        } else if(ch >= 'A' && ch <= 'Z'){
            ch += key;
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }

    }

    cout << "Encrypted message: " << message << endl;

    return 0;
}