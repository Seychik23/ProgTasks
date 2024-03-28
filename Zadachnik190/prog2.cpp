#include <iostream>
using namespace std;

int main() {
    float funt, kg;

    cout << "Введите вес в фунтах: ";
    cin >> funt;

    kg = funt * 0.453592; // 1 фунт = 0.453592 кг

    cout << "Вес в кг.: " << kg << endl;

    return 0;
}

