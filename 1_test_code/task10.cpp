
#include <iostream>
#include <typeinfo>
//#include<bits/stdc++.h>
//template <typename T> std::string type_name();

template <class T>
constexpr
std::string_view
type_name()
{
    using namespace std;
#ifdef __clang__
    string_view p = __PRETTY_FUNCTION__;
    return string_view(p.data() + 34, p.size() - 34 - 1);
#elif defined(__GNUC__)
    string_view p = __PRETTY_FUNCTION__;
#  if __cplusplus < 201402
    return string_view(p.data() + 36, p.size() - 36 - 1);
#  else
    return string_view(p.data() + 49, p.find(';', 49) - 49);
#  endif
#elif defined(_MSC_VER)
    string_view p = __FUNCSIG__;
    return string_view(p.data() + 84, p.size() - 84 - 7);
#endif
}


int main(int argc, const char * argv[]) {


    const int ci = 0;
    std::cout << typeid(ci).name() << '\n';
    
    std::cout << type_name<decltype(ci)>() << '\n';
    
    std::cout << INT_MAX <<std::endl;
    
    return 0;
}
