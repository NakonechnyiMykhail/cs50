#include <iostream>
#include <cmath>

using namespace std;

int cube (int input); //Прототип функції cube
double cube (double input);

int main(void)
{
    int x = 2;
    cout << "x is " << x << endl;
    x = cube(x);
    cout << "x is " << x << endl;

    double y = 2.5;
    y = cube(y);
    cout << "y is " << y << endl;
}

int    cube(int    input) { return input * input * input;}
double cube(double input) { return input * input * input;}
