// Среднее всех чисел от a до 200
#include<iostream>
using namespace std;
int main (){
    int a;
    int sum = 0;
    int count = 0;
    cout<<"Введите a";
    cin >> a;
    for (int i = a; i <= 200; ++i) {
        sum += i;
        count++;
    }
    
    int average = sum / count;

    cout << "Среднее арифметическое всех чисел от a до 200: " << average << endl;

    return 0;
}



