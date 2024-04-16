#include <iostream>
#include <cstdlib>  // Для функции rand и srand

using namespace std;

int main() {
    const int s = 15;
    double arr[s];

    // Инициализация генератора случайных чисел с помощью текущего времени
    srand(time(0));

    // Заполнение массива случайными значениями от 0 до 1
    for (int i = 0; i < s; ++i) {
        arr[i] = static_cast<double>(rand()) / RAND_MAX; // Генерация числа в диапазоне [0, 1]
    }

    // Вывод элементов массива
    cout << "Элементы массива (" << s << " элементов):" << endl;
    for (int i = 0; i < s; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

