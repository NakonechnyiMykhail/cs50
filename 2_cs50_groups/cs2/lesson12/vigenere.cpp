#include <iostream>
#include <cstring>

using namespace std; // std::string

int main(void){
    char message[100], key[20],ch;
    int i, j;
    int msgLen = 0, keyLen = 0;

    cout << "Enter a message to encrypt: ";
    cin.getline(message, 100);
    cout << "Enter key: ";
    cin.getline(key, 20);

    msgLen = strlen(message);
    keyLen = strlen(key);

    char newKey[msgLen], encMsg[msgLen], decMsg[msgLen];

    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j ){
        if (j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }
    newKey[i] = '\0';

    //encryption
    for(i = 0; i < msgLen; ++i)
        encMsg[i] = ((message[i] + newKey[i]) % 26) + 'A';

    encMsg[i] = '\0';

    //decryption
    for(i = 0; i < msgLen; ++i)
        decMsg[i] = (((encMsg[i] - newKey[i]) + 26) % 26) + 'A';

    decMsg[i] = '\0';

    cout << "Original Message: " << message << endl;
    cout << "Key: " << key << endl;
    cout << "New Generated key: " << newKey << endl;
    cout << "Encrypted Message: " << encMsg << endl;
    cout << "Decrypted Message: " << decMsg << endl;

    return 0;
}