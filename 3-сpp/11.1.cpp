//Массив
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int arr[SIZE] = {37, 0, 50, 46, 34, 46, 0, 13};

    // Выводим элементы массива
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
