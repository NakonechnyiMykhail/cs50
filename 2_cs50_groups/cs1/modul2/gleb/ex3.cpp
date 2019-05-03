#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string fileName;
    cout << "File name: ";
    cin >> fileName;
    ofstream f(( fileName + ".txt" ).c_str());
    string text;
    while ( text != "exit" )
    {
        getline(cin, text);
        f << text;
    }
    f.close();
    return 0;
}