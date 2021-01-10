/*
Să se citească elementele unui vector cu maxim 100 de elemente reale.  

b) Să se ordoneze crescător elementele vectorului.
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

int gata = FALSE;
int i; 
while (!gata){ 
 gata = TRUE; 
for (i=0; i<=n-2; i++) 
  if (vect[i]>vect[i+1]){ 
    aux=vect[i]; 
    vect[i]=vect[i+1]; 
    vect[i+1]=aux; 
    gata = FALSE;

}
} 
for(int i=0; i<n; i++)
cout<<vect[i]<<'\t';

}

