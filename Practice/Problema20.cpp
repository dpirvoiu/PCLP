/*
Se citesc câte 2 numere întregi, până la întâlnirea perechii de numere 9, 9. Pentru fiecare
pereche de numere citite, să se afişeze cel mai mare divizor comun al acestora.
*/

#include <iostream>
using namespace std;

int main(){
    int a,b,r;
    cout<<"Introduceti a: ";cin>>a;
    cout<<"Introduceti b: ";cin>>b;
    while(b){
    r=a%b;
    a=b;
    b=r;
    
    }   
    cout<<a<<endl;

}