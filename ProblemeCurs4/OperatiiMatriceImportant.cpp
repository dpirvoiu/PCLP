/*
Să se citească elementele matricilor A(MXN), B(NXP) şi C(MXN), unde 
M<=10, N<=10 şi P<=10. Să se interschimbe liniile matricii A în modul următor: prima cu 
ultima, a doua cu penultima, etc. Să se calculeze şi să se afişeze matricile: AT=A
, SUM=A+C, 
PROD=AXB. Implementarea citirilor şi afişărilor se va completa conform exemplului dat în 
capitolul 4.2. 
*/

#include<iostream>
using namespace std;

int main(){
    double a[10][10],b [10][10],c[10][10];
    int m,n,p,j;
    cout<<"m=";cin>>m;
    cout<<"n=";cin>>n;
    cout<<"p=";cin>>p;
    
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cout<<"A[ "<<i<<" ]"<<"[ "<<j<<"]";
            cin>>a[i][j];
        }
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++){
            cout<<"B[ "<<i<<" ]"<<"[ "<<j<<"]";
            cin>>b[i][j];
        }
    cout<<"\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) // afisare matrice
        cout<<a[i][j]<<'\t';
        cout<<'\n';
    }


    // 2 Interschimbarea liniilor
    for(int i=0;i<m/2;i++)
        for(int j=0;j<n;j++){
            double aux=a[i][j];
            a[i][j]=a[m-1-i][j];// 
            a[m-1-i][j]=aux;
        }
    cout<<"Matricea A cu linii interschimbate: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) // afisare matrice
        cout<<a[i][j]<<'\t';
        cout<<'\n';
    }

    // 3 Transpusa AT
    double at[10][10];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
        at[i][j]=a[j][i];}
    cout <<"A transpus=\n";

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) // afisare matrice
        cout<<at[i][j]<<'\t';
        cout<<'\n';
        }

    // Citire C
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
            cout<<"C[ "<<i<<" ]"<<"[ "<<j<<"]";
            cin>>c[i][j];
            }
    
    // Calcul Matrice suma
    double sum[10][10]; 
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++){
        sum[i][j]=a[i][j]+c[i][j]; }
        cout<<"Matricea SUM=A+Ceste\n" ;      
   
    // afisare matrice SUMA
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) 
        cout<<sum[i][j]<<'\t';
        cout<<'\n';
    }

    // PRODUS IMPORTANT

    double prod[10][10];
    for (int i=0;i<m;i++)
        for(j=0;j<p;j++){
            prod[i][j]=0;
            for(int k=0;k<n;k++)
                prod[i][j]+=a[i][k]*b[k][j];// IMPORTANT
        }
    cout<<"Matricea produs dintre A si B este:\n";

    for(int i=0;i<m;i++){
        for(j=0;j<p; j++)
        cout<<prod[i][j]<<'\t';
        cout<<'\n';
    }
}
