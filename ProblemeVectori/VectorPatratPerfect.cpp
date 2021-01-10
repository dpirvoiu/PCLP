/*
Se citeste un tablou unidimensional cu n(1<=n<=100) componente numere naturale

Se cere sa se construiasca si sa se afiseze un nou vector cu componentele patrate perfecte ale vectorului initial
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    unsigned int x[100],y[100],n,i,j;
    cout<<"Dati numarul elementelor tabloului n= ";
    cin>>n;

    cout<<"\nDati elementele tabloului ";
    for(i=0; i<n;i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    
    j=0;// numarul de elemente din noul vector
    for(i=0;i<n;i++){

        if(sqrt(x[i])== int(sqrt(x[i]))) //!! (CAST) VERIFICARE PATRAT PERFECT
        {
            y[j]=x[i];
            j++;
        }
    }

    cout<<"\nElementele patrate perfecte sunt:  ";
    for(i=0;i<j;i++) // !!! j numarul de elemente din noul vector
    {
        cout<<y[i]<<" ";
    }

    
}