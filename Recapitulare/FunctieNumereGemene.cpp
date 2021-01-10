/*
Sa se scrie o functie care sa verifice daca douna numere intregi sunt prime gemene

GEMENE= Prime si diferenta in modul este egala cu 2.

x=19, y=13 Nu sunt prime gemene
x=41, y=43 sunt prime gemene
*/

#include<iostream>
using namespace std;

int prim(long int x){
    long int i,nr_prim=1;
    for(i=2;i<=x/2;i++)
        if(x%i==0) nr_prim=0;
    if(nr_prim==1) return 1;
    else return 0;
}

int main(){
    long int a,b;
    cout<<"Dati primul numar a=";
    cin>>a;
    cout<<"Dati al doilea numar b=";
    cin>>b;
    if((prim(a)==1) && (prim(b)==1) && (abs(a-b)==2))
        cout<<"Numerele "<<a<<" si "<<b<<" sunt prime gemene \n";
        else
        cout<<"Numerele "<<a<<" si "<<b<<" NU sunt prime gemene \n";


}