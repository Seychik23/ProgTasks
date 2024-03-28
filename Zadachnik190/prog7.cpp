#include <iostream>
#include <cmath>
using namespace std;
int main (){
float CenaTetr; // цена тетради
int KolTetr; // количество тетрадей
float CenaKar; // цена карандаша
int KolKar; // количество карандашей
float CenaLin; // цена линейки
float Summa; // стоимость покупки
cout << "цена тетради"<<endl;
cin >> CenaTetr;
cout << "количество тетрадей"<<endl;
cin >> KolTetr;
cout << "цена карандаша"<<endl;
cin >> CenaKar;
cout << "количество карандашей"<<endl;
cin >> KolKar;
cout << "цена линейки"<<endl;
cin >> CenaLin;
Summa = ((CenaTetr*KolTetr)+(CenaKar*KolKar)+CenaLin);
cout << "Стоимость покупки:" << Summa << endl;
return 0;
}


