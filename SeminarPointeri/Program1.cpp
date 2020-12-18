#include<iostream>
using namespace std;

double a, *b;

int main(){
    cout<<"a= ";cin>>a;
    cout<<endl<<"a="<<a<<endl;
    cout<<"Adresa lui a: &a"<<&a<<endl;

    b=&a;

    cout<<"Pinterul b stocheaza adresa variabilei a: b= ";
    cout<<b<<endl;
    cout<<"b reprezinta continutul adresei de memorie: *b= ";
    cout<<*b<<endl;
}
