#include <iostream>
#include <cmath>

using namespace std;

double cos_s(double x, int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += pow(-1, i) * pow(x, 2 * i) / tgamma(2 * i + 1);
    }
    return result;
}

int main() {
    double x;
    int n;

    cout << "Input x: ";
    cin >> x;

    cout << "Input n: ";
    cin >> n;

    double cos_v = cos_s(x, n);

    cout << "X = " << x << ", N = " << n << ", Cos = " << cos_v << endl;

    return 0;
}
