#include <iostream>
using namespace std;

int main() {
    const int s = 10;
    int arr[s];

    cout << "Введите " << s << " целых чисел:" << endl;

    // Заполнение массива значениями, введенными с клавиатуры
    for (int i = 0; i < s; ++i) {
        cout << "Элемент " << i << ": ";
        cin >> arr[i];
    }

    // Вывод элементов массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < s; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
