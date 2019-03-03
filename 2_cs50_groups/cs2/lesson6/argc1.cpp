#include <iostream>
using namespace std;
int main (int argc, const char *argv[])
{
    // вывести все аргументы командной строки
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
    }
}
