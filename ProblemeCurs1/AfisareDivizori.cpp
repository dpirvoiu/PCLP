/*
 Proiectaţi un algoritm care să afişeze toţi divizorii unui număr întreg citit de la tastatură. 
  
*/
#include<iostream>
using namespace std;

int a,i;

int main(){
cout<<"Introduceti numarul: "; 
cin>>a;

for (i=1;i<=a;i++){
    if(a%i==0) 
    cout  << i << endl;
}
}