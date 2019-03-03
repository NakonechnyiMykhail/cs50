#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){
    ofstream file ("test.txt");
    if(file.is_open()){
        file << "test1 \n";
        file << "test2 \n";
        file << "test3 \n";
        file.close();
    } else cout << "unable to open file";

    string line;
    ifstream file2 ("test.txt");
    if(file2.is_open()){
        while ( getline(file2, line) )
        {
            cout << line << endl;
        }
        file2.close();
    } else cout << "unable to open file 2";

    return 0;
}