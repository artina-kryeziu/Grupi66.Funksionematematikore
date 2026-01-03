#include <iostream>
using namespace std;


int modulus(int a, int b) {
    if (b == 0) {
        cout << "Gabim: Ndarje me zero!" << endl;
        return 0;
    }
    return a % b;
}


long long factorial(int n) {
    if (n < 0) {
        cout << "Gabim: Numër negativ!" << endl;
        return 0;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
