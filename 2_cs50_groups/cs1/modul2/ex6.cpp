#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath> // sqrt()
#include <cstdlib> // atof()
#include <iomanip> // std::setw()

void quad(double a, double b, double c);

int main (void){
    double coef[3] = {0.0, 0.0, 0.0};
    int i = 0;
    std::string line;
    std::ifstream file ("data.dat");
    if(file.is_open()){
        while ( getline(file, line) && (i < 3))
        {
            const char* num = line.c_str();
            coef[i] = atof(num);
            i++;
        }
        file.close();
    } else std::cout << "unable to open file";

    quad(coef[0], coef[1], coef[2]);

    return 0;
}

void quad(double a, double b, double c){
    double d = b * b - 4 * a * c;
    if (d == 0) {
        std::cout << "x = " << (- b / (2 * a)) << std::endl;
    } else if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "x1 = " << x1 << std::setw(10) << "x2 = " << x2 << std::endl;
    } else {
        std::cout << "real numbers are not been!" << std::endl;
    }

}