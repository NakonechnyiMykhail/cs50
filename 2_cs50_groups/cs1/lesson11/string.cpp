#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

template<typename Container>
bool is_quote(const Container& c, const string& s){
    return search(c.begin(), c.end(), s.begin(), s.end()) != c.end();
}

int main(int argc, const char *argv[])
{
    //std::string str = "Make Some saaaaasd 2342353257Здесь может располагаться Ваша реклама     с несколькими пробелами!";
    string str = "Make Some saaaaasd 2342353257 Here can be your history     with a few spaces!";
    // str.erase(std::remove(str.begin(), str.end(), 'a'), str.end());
    // str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    // str.erase(remove(str.begin(), str.end(), ' '), str.end());

    cout << str << endl;
    //std::cout << str << std::endl;

    vector<char> vec(str.begin(),str.end());
    cout << boolalpha << is_quote(vec, "history") << '\n'
                      << is_quote(vec, "car") << '\n';

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << endl;
    }

    // vector<int> vec(10);// = {1, 2, 3, 2, 6, 21, 23, 1233, 235, 345, 123, 645};

    // for(int i = 0; i < vec.size(); i++) {
    //     vec[i] = i * i;
    // }
    // vec[0] = 12;
    // vec[4] = 124;
    // vec[2] = 1234;
    // vec[1] = 323;
    // vec[7] = 123124;

    // for(int i = 0; i < vec.size(); i++) {
    //     cout << vec[i] << "\t";
    // }


    //cout << endl;
    // swap()
    // search()
    // binary_search()
    // sort()
    // is_sorted()

    return 0;

}

