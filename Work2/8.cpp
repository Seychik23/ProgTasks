#include <iostream>
using namespace std;
int fact (int n) {
if (n==0 || n==1) {
    return 1;
}
else {
    return n*fact(n-2);
}
}
int main (){
int n;
cout << "Input n"<<endl;
cin >> n;
int dfactorial = fact(n);
cout << "Double factorial = " << dfactorial << endl;
}
