/*
Să se citească un număr întreg format din 4 cifre (abcd). Să se calculeze şi să se afişeze
valoarea expresiei reale: 4*a + b/20 -c + 1/d.
*/
#include <iostream>
using namespace std;

int main(){
    int numar, a,b,c,d,e,f, suma;
    cout<<"Introduceti numarul 4 cifre:";
    cin>>numar;

    a=numar%10;
    b=numar/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;

    suma=4*a+c/20-e+1/f;
    cout<<a<<" "<<c<<" "<<e<<" "<<f<<endl;
    cout<<suma<<endl;
}