#include <iostream>
#include <cmath>

int main() {
    double x, y;

    std::cout << "Введите x: ";
    std::cin >> x;

    y = -2.7 * pow(x, 3) + 0.23 * pow(x, 2) - 1.4;

    std::cout << "Значение функции y = -2.7*x^3 + 0.23*x^2 - 1.4 при x = " << x << " = " << y << std::endl;

    return 0;
}

