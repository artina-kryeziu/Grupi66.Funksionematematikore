#include <iostream>
#include <cmath>
using namespace std;

// deklarimet e funksioneve
double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);
double power(double, double);
double squareRoot(double);
int modulus(int, int);
long long factorial(int);

int main() {
    double x = 5, y = 3;
    int m = 5, n = 2;

    cout << add(x, y) << endl;
    cout << subtract(x, y) << endl;
    cout << multiply(x, y) << endl;
    cout << divide(x, y) << endl;
    cout << power(x, y) << endl;
    cout << squareRoot(x) << endl;
    cout << modulus(m, n) << endl;
    cout << factorial(m) << endl;

    return 0;
}
