/*
Functie care sa verifice daca un numar este rotund
Numar=ROTUND daca are un numar egal de 0 si 1 in reprezentarea din binar

*/

#include<iostream>
using namespace std;

long int n;

int rotund(long int n){
    int nr1=0, nr0=0;
    while(n){
        if(n%2==0) nr0++;
        else nr1++;
        n=n/2;
    }
    if (nr0==nr1) return 1;
    else return 0;
}

int main(){

    cout << "Dati numarul n= ";
    cin>>n;
    if(rotund(n)==1)
    cout<<"Numarul dat este rotund \n";
    else cout<<"Numarul dat NU este roturn \n";
}