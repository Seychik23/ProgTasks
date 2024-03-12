#include <iostream>
using namespace std;

int main() {
    int counter;
    cout <<"Введите значение" <<endl;
    cin >> counter;
    cout << "Исходное значение counter: " << counter << endl;

    counter -= 2; 

    std::cout << "Новое значение counter: " << counter << endl;

    return 0;
}


