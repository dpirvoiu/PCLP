/*

Numar Natural transformat in Vector!

Se considera un numar natural n. Se cere sa se formeze un vector cu cifrele numarului
*/

#include<iostream>
using namespace std;

int main(){
    int vect[30];
    long int n, i, m;
    cout<<"Dati numarul n= "; cin>>n;

    i=0;

    while(n){
        vect[i]=n%10;
        i++;
        n=n/10; //Algoritm de separare a cifrelor
    }
    m=i-1;

    cout<<"\nVectorul cu cifrele numarului este \n";
    
    for(i=0;i<m;i++){
        
        cout<<vect[i]<<" ";
    }

}