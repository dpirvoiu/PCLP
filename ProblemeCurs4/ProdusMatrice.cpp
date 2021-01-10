/*
Produs Matrice
Se considera doua tablouri bidimensionale A si B cu nxm, respectiv mxp numere intregi
C=A*C
*/

#include <iostream>
using namespace std;

int main(){
    int a[10][10], b[10][10], c[10][10];
    int n,m,i,j,k,p;
    cout<<"Linii Matrice A: "; cin>>n;
    cout<<"Coloane Matrice A: "; cin>>m;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    cout<<"Elementele Matricei A sunt: \n";

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        cout<<a[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<"Linii Matrice B: "; cin>>m; // Liniile trebuie sa fie egale cu numarul de coloane a matricei a. Memoram in M
    cout<<"Coloane Matrice B: "; cin>>p;
    for(i=0;i<m;i++)
        for(j=0;j<p;j++){
            cout<<"B["<<i<<"]["<<j<<"]:";
            cin>>b[i][j];
        }
    cout<<"Elementele Matricei B sunt: \n";

    for(i=0;i<m;i++){
        for(j=0;j<p;j++)
        cout<<b[i][j]<<"\t";
        cout<<"\n";
    }

    // Matricea Produs folosind n=Nr Linii din prima Matrice, si p numarul de coloane din a doua. 

    for(i=0;i<n;i++)
        for(j=0;j<p;j++){
            c[i][j]=0;
            for(k=0;k<m;k++)
            c[i][j]+=a[i][k]*b[k][j];
        }

    cout<<"Elementele matricei produs sunt: \n";

    for(i=0;i<m;i++){
        for(j=0;j<p;j++)
        cout<<c[i][j]<<"\t";
        cout<<"\n";
    }
}

