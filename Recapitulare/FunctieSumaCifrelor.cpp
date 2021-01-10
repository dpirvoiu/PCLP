/*
Sa se scrie o functie care sa afiseze suma cifrelor unui numar intreg dat ca parametru
*/

#include<iostream>
using namespace std;


long int n,a;


int cifre(long int n){
    int s=0;
    while(n!=0){
        s=s+n%10;
        n=n%10;
    }
    return s;
}

int main(){

    cout<<"Dati numarul a= "; cin>>a;

    cout<<"Suma cifrelor numarului dat este= "<<cifre(a)<<endl;
}
