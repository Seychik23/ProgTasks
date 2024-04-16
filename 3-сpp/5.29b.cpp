// Среднее всех чисел от 150 до b
#include<iostream>
using namespace std;
int main (){
    int sum = 0;
    int count = 0;
    int b;
    cout<<"Введите b";
    cin >> b;
    for (int i = 150; i <= b; ++i) {
        sum += i;
        count++;
    }
    
    int average = sum / count;

    cout << "Среднее арифметическое всех чисел от 150 до b: " << average << endl;

    return 0;
}



