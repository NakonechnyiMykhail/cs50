//
// написать "универсальную" функцию formula для
// подсчета формулы a*a-b*b+2/c
// где a,b,c - входные параметры в функции
// // использовать "универсальный" тип данных auto
// для функции и всех ВХОДНЫХ аргументов
// ДЛЯ ПРОВЕРКИ реализации программы: ввести
// a =5, b = 2, c = 1.0 и результат формулы

#include <iostream>

//v1
// template <typename T, typename E, typename C>
// auto formula(T a, E b, C c) -> decltype(a * a - b * b + 2 / c) // decltype - позволяет определить тип на основе входного параметра
// {
//   return a * a - b * b + 2 / c;
// }
//v2
template<class T, class U, class E>
auto formula (T a, U b, E c) { return a * a - b * b + 2 / c; }



int main (int argc, const char *argv[])
{
    auto a = 5;
    auto b = 2;
    auto c = 1.0;

    std::cout << formula (a, b, c) << std::endl;

    return 0;
}

// template <typename T, typename E, typename C>
// auto formula(auto a, auto b, auto c) -> decltype(a * a - b * b + 2 / c) // decltype - позволяет определить тип на основе входного параметра
// {
//   return a * a - b * b + 2 / c;
// }



// #include <iostream>

// template<class T, class U, class E>
// auto formula (T a, U b, E c) {
//     return a * a - b * b + 2 / c;
//     //std::cout << a * a - b * b + 2 / c << std::endl;
// }

// int main (int argc, const char *argv[])
// {
//     auto a = 5;
//     auto b = 2;
//     auto c = 1.0;
//     float d = 0.0;

//     //std::cout << formula (a, b, c) << std::endl;
//     d = formula (a, b, c);
//     //d = a * a - b * b + 2 / c;
//     std::cout << d << std::endl;

//     return 0;
// }
