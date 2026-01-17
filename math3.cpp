#include <iostream>
#include <cmath>
using namespace std;

// 5?? Fuqia
double power(double base, double exponent) {
    return pow(base, exponent);
}

// 6?? Rrënja katrore
double squareRoot(double num) {
    if (num < 0) {
        cout << "Gabim: Numër negativ!" << endl;
        return 0;
    }
    return sqrt(num);
}