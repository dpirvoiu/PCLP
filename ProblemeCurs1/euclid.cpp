/* 
Reprezentaţi algoritmul lui Euclid (pentru calculul celui mai mare divizor comun a 2 
numere întregi) prin schemă logică şi prin pseudocod.
*/

#include<iostream>
using namespace std;

int a,b,r;
int main(){

cout << "Introduceti primul numar: "; 
cin >> a;
cout << "\n" << "Introduceti al doilea numar: ";
cin >> b;


while (b!=0){
    r= a%b;
    a=b;
    b=r;
}
cout<< a<<endl;
}