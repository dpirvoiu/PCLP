/*
Se citesc câte 2 numere întregi, până la întâlnirea perechii de numere 9, 9. Pentru fiecare
pereche de numere citite, să se afişeze cel mai mare divizor comun al acestora.
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,r;


for(int i=0;i<=10 && a!=9 && b!=9;i++){
    cout << "Introduceti primul numar: "; 
    cin >> a;
    cout << "\n" << "Introduceti al doilea numar: ";
    cin >> b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    
    cout<<"Cmdc: "<<a<<endl;

}
    return 0;
}