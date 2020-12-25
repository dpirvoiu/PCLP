/*
Proiectaţi un algoritm care să testeze dacă un număr întreg dat este număr prim.  
*/
#include<iostream>
using namespace std;

int a,i, nr;

int main(){
cout<<"Introduceti numarul:"; 
cin>>a;

for (i=2;i<=a/2;i++){
    if(a%i==0) 
    nr++; //Incrementam numarul. In caz ca acesta este mai mare decat 0 la finalul ciclului, numarul nu este prim
}
if(nr==0)
    cout<< "Numarul este prim";
else
    cout<< "Numarul nu este prim";
    return 0;

}