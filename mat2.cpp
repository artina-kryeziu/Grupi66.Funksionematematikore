
#include <iostream>
using namespace std;

double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b == 0) {
        cout << "Gabim: Ndarje me zero!" << endl;
        return 0;
    }
    return a / b;
}
