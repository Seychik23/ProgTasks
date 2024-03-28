#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float summa, dohod;
    int srok, stavka;

    cout << "Введите сумму вклада: ";
    cin >> summa;

    cout << "Введите срок вклада (в годах): ";
    cin >> srok;

    cout << "Введите ставку вклада: ";
    cin >> stavka;

    dohod = summa * pow(1 + stavka / 100.0, srok) - summa;

    cout << "Доход по вкладу за " << srok << " год: " << dohod << endl;

    return 0;
}
