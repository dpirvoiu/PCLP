/*
Se Considera matricea A=nxn.
1. Suma elementelor de pe diagonala principala
2. Produsul elementelor de pe diagonala principala
3. Minimele elementelor aflate deasupra respectiv sub diagonala principala
4.Maximele din elementele aflate deasupra, respectiv sub diagonala principala
*/

#include<iostream>
using namespace std;

int main(){
    int n,m,i,j,a[30][30],min1,min2,max1,max2,suma,produs;
    cout<<"Numar de linii si coloane =";
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    cout<<"Elementele matricei A sunt: \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    // ==Suma elementelor de pe diagonala principala

    suma=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            if(i==j)suma+=a[i][j];
        }

    cout<<"\nSuma elementelor de pe diagonala principala "<<suma;

    //==Produsul elementelor de pe diagonala secundara==

    produs=1;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==n-j-1)produs*=a[i][j];
    cout<<"\nProdusul elementelor de pe diagonala secundara este "<<produs;

    // Minimul elementelor deasupra diagonalei principale

    min1=1000;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j && a[i][j]<min1) 
            min1=a[i][j];
    cout<<"\nMinimul de deasupra diagonalei principale este "<<min1;


    // Minimul de sub diagonala principala
    min2=1000;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j && a[i][j]<min2) // i>j => deasupra
            min2=a[i][j];
    cout<<"\nMinimul de sub diagonala principala este "<<min2;

    //Maximul de deasupra diagonalei principale
    max1=-1000;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i<j && a[i][j]>max1) 
            max1=a[i][j];
    cout<<"\nMaximul de deasupra diagonalei principale este "<<max1;

    //Maximul de sub diagonala principala
    max2=-1000;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i>j && a[i][j]>max2) 
            max2=a[i][j];
    cout<<"\nMaximul de sub diagonala principala este "<<max2;
}