#include<iostream>
using namespace std;

short a, *pa=&a;
int b, *pb=&b;

int main(){
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"Adresa lui a este: "<<pa<<endl;
    cout<<"Adresa lui b este: "<<pb<<endl;
    pa++;
    cout<<"Adresa lui a este: "<<pa<<endl;
    pb++;
    cout<<"Adresa lui b este: "<<pb<<endl;

    }
