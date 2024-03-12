#include <iostream>
#include <cmath>
using namespace std;
int main (){
float r1, r2; // внешний радиус и радиус отверстия
float s; // площадь кольца
cout << "Введите радиус";
cin >> r1;
cout << "Введите радиус отверстия";
cin >> r2;
 s = M_PI * (pow(r1, 2) - pow(r2, 2));
 cout << "Площадь кольца:" << s<< endl;
return 0;
}
