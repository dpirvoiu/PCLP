/*
Să se citească elementele unui vector cu maxim 100 de elemente reale.  
a) Să se interschimbe elementele vectorului în modul următor: primul cu ultimul, al doilea cu 
penultimul, etc. 

*/
#define FALSE 0
#define TRUE  1
#include<iostream>
using namespace std;
int main(){
    double vect[100];
    int n;
    cout<<"Nr.elemente: ";
    cin>>n;
    double aux;

    for(int i=0;i<n;i++){
    cout<<"Element "<<i<<" ";
    cin>>vect[i];
    }

    for (int i=0;i<n/2;i++){
        aux=vect[i];
        vect[i]=vect[n-1-i];// n-1 este
        vect[n-1-i]=aux;
    }

    for(int i=0;i<n;i++){
    cout<<vect[i]<<"\t";
    }
    cout<<endl;
}