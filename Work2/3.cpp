#include <iostream>
#include <cmath>

using namespace std;

double calculate_exp(double x, double constant = 0.0001) {
    double result = 0;
    double term = x;
    int n = 1;

    while (abs(term) >= constant) {
        result += term;
        n++;
        term = pow(x, n) / tgamma(n + 1);
    }

    return result;
}

int main() {
    double x;

    cout << "Input x: ";
    cin >> x;
    double exp = calculate_exp(x);

    cout << "Exp: " << exp << endl;

    return 0;
}
