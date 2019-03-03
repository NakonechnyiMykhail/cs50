#include <iostream>

using namespace std;

auto formula (auto a, auto b, auto c);

int main(void){
	int x = 5; int y = 2; double z = 1.0;
	cout << formula(x,y,z) << endl;
}

auto formula (auto a, auto b, auto c)
{
	return a * a - b * b + 2 /c;
}