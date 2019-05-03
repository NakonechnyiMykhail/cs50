
yura yura <gc904231@gmail.com>
31 мар. 2019 г., 15:51 (6 дней назад)

кому: я

#include <iostream>


using namespace std;

int main()
{
    double a ,b, k;
    a=0;
    b=1;
    cin >> k;
    while (k<=0)
    {
        cout << "ERROR! Enter the number greater than zero: ";
        cin >> k;
    }

    while (k!=0)
    {
        a=a+b;
        b=a-b;
        k=k-1;
        cout << a << " ";

    }

    return 0;
}