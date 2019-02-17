// #include <iostream>
// using namespace std;

// void main()
// {
// //setlocale(LC_ALL, "ru");

// int a, b, selection;
// cout « "Enter 2 numbers" « endl;
// cin » a » b;

// cout « "Select operation " « endl;
// cout « "1. Summ" « endl;
// cout « "2. Sub" « endl;
// cout « "3. Mult" « endl;
// cout « "4. Dev" « endl;
// cin » selection;

// switch (selection)
// {
//     case 1:
//         cout << "Result a + b = " « a + b « endl;
//         break;
//     case 2:
//         cout « "Result a - b = " « a - b « endl;
//         break;
//     case 3:
//         cout « "Result a * b = " « a * b « endl;
//         break;
//     case 4:
//         cout « "Result a / b = " « (float) a / b « endl;
//         break;
//     default:
//         cout « "Not found!" « endl;
//         break;
// }

// }


#include <iostream>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "ru");

    double numberOne = 0.0;
    double numberTwo = 0.0;
    char   operation = ' ';

    cout << "Введите 2 числа" << endl;
    cin >> numberOne >> numberTwo;

    cout << "Выберите математическую операцию" << endl <<
         "1. Сложение +" << endl <<
         "2. Вычитание -" << endl <<
         "3. Умножение *" << endl <<
         "4. Деление /" << endl;

    cin >> operation;

    switch (operation)
    {
        case '+':
            cout << "Результат сложения "
                 << numberOne << "+" << numberTwo << " = "
                 << numberOne + numberTwo << endl;
            break;
        case '-':
            cout << "Результат вычитания "
                 << numberOne << "-" << numberTwo << " = "
                 << numberOne - numberTwo << endl;
            break;
        case '*':
            cout << "Результат уменожения "
                 << numberOne << "*" << numberTwo << " = "
                 << numberOne * numberTwo << endl;
            break;
        case '/':
            if(numberTwo == 0) {
                cout << "Devidion by Zero! Try another!" << endl;
            } else {
                cout << "Результат деления "
                     << numberOne << "/" << numberTwo << " = "
                     << numberOne / numberTwo << endl;
            }
            break;
        default:
            cout << "Ошибка! Пункт меню отсутствует!" << endl;
            break;
    }

}