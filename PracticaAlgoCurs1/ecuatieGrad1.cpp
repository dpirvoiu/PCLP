/*
Proiectaţi un algoritm care să rezolve o ecuaţie de gradul I (de forma ax + b = 0), unde a,b 
sunt numere reale. Discuţie după coeficienţi. 
*/

#include <iostream>
using namespace std;

double x,a,b;
int main(){

cout << "Introduceti a: ";
cin >> a; 
cout << "Introduceti b: "; cin>>b;
if(a!=0){
    x = -b/a;
    cout << x;

}else if(b==0) 
    cout <<"Infinitate de solutii.";
else cout <<"Nu are solutii";
    return 0;
}