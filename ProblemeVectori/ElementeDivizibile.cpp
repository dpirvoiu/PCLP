/*
Se citeste un tablou unidimensional cu n(1<=n<=100) componente numere naturale.

Sa se calculeze si sa se afiseze suma elementelor din vector care sunt divizibile cu o valoare naturala introdusa de la tastatura.
*/ 

#include<iostream>

using namespace std;

int main(){
    unsigned int x[100],a,n,i,s;
    cout<<"\nDati numarul de elemente tablou n= ";
    cin>>n;
    cout<<"Dati elementele tabloului\n";
    for(i=0;i<n;i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];

    }
    cout<<"\nDati valoarea a=";
    cin>>a;

    s=0; // Sume elementelor care indeplinesc cerinta problemei
    for(i=0;i<n;i++)
        if(x[i]%a==0)
            s=s+x[i];
    cout<<"\nSuma elementelor din vector divizibile cu "<<a<<" este= "<<s;
}