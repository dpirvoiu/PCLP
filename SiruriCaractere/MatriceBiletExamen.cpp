/*
3. Definiti dimensiunea dim a unei matrici patratice cu ajutorul unei directive preprocesor, cititi
afisati matricea A[dim][dim] de tip real cu dimensiunea stabilita.

b. Scrieti un subprogram care returneaza elementele nenule de pe diagonala secundara
sau afisaja "Numere nenule"

c. calculati a*a*a-a
*/
#include<iostream>

#define dim 2
using namespace std;


int main(){
   int a[dim][dim], ok=1, b[dim][dim];
   for(int i=0; i<dim; i++)
    for(int j=0; j<dim; j++){
    cout<<"a["<<i+1<<"]["<<j+1<<"]=";
     cin>>a[i][j];
     }

  for(int i=0; i<dim; i++){
    for(int j=0; j<dim; j++)
     cout<<a[i][j]<<" ";
     cout<<"\n";
    }
    cout<<"\n";
   for(int i=0; i<dim; i++)
    for(int j=0; j<dim; j++)
    if((i+j==dim-1)&& (a[i][j]<1 && a[i][j]>-1)){
        ok=0;
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    if(ok==1) cout<<"\nNumere nenule"<<endl;


    for(int i=0; i<dim; i++)
    for(int j=0; j<dim; j++){
        b[i][j]=(a[i][j]*a[i][j]*a[i][j])-a[i][j];
    }
    cout<<"\nMatricea b\n";
    for(int i=0; i<dim; i++){
    for(int j=0; j<dim; j++)
        cout<<b[i][j]<<" ";
        cout<<"\n";
    }

}
