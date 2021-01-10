/*
Transpusa
*/

#include<iostream>
using namespace std;

int main(){
    int a[10][10],b[10][10];
    int n,m,i,j;

    cout<<"Numar linii n= ";cin>>n;
    cout<<"Numar coloane m= ";cin>>m;

    //citire
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){

            cout<<"a["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
        }
    //afisare

    cout<<"Elementele matricei A: \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            cout<<a[i][j]<<"\t";
            cout<<'\n';
          }
    
    // Transpusa

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        b[j][i]=a[i][j]; // 

    //Afisarea Matricei inlocuind in FOR coloanele si Liniile

    cout<<"Transpusa:\n";

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            cout<<b[i][j]<<"\t";
            cout<<'\n';
          }
}