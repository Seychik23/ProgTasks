#include<iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;
    int count = 0;

    cout << "Введите a: ";
    cin >> a;
    
    cout << "Введите b: ";
    cin >> b;

    if (b >= a) {
        for (int i = a; i <= b; ++i) {
            sum += i;
            count++;
        }
    } else {
        cout << "b должно быть больше или равно a" << endl;
    }
    
    int average = sum / count;

    cout << "Среднее арифметическое всех чисел от a до b: " << average << endl;

    return 0;
}



