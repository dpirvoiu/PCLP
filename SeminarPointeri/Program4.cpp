/*
Se da o variabila de tip short respectiv o variabila de tip int. Sa se declare pointerii aferenti acestor variabile si sa se realizeze operatii de incrementare/decrementeare asupra pointerilor, urmarinduse valorile acestora in funcie de tipul variabilelor
*/

#include<iostream>
using namespace std;

short a, *pa=&a;
int b, *pb=&b;

int main(){
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"Adresa lui a este: "<<pa<<endl;
    cout<<"Adresa lui b este: "<<pb<<endl;
    pa+=2;
    cout<<"Adresa lui a, dupa adunare, este: "<<pa<<endl;
    pb-=3;
    cout<<"Adresa lui b, dupa scadere, este: "<<pb<<endl;

    }
