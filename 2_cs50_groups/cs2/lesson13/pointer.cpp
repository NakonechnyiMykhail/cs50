#include <iostream>

using namespace std;

int main (void)
{
    int count = 5;
    int *p_count;
    // a
    // int* pa
    // ptr_a

    p_count = &count;

    cout << p_count << "\t" << *p_count << endl;
    cout << &count << endl << endl;



}