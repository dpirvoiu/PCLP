/* Afisare Matrice, Diagonala Principala, diagonala secundara*/

#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    int n,i,j;

    cout<<"Introduceti dimensiunile matricei: ";
    cin>>n;

    char a[n][n];
    cout<<"Introduceti elementele matricei A: \n";
    for(i=0; i<n; i++)
        for(j=0;j<n;j++){
            cout<<"A["<<i<<"]["<<j<<"]:";
            cin>>a[i][j];
    }

    cout<<"Elementele Matrice A sunt: \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
    cout<<"Cuvantul de pe diagonala principala este: ";
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            if(i==j){
                cout<<a[i][j]<<" ";
            }
    cout<<"\n";

    cout<<"Cuvantul de pe diagonala secundara este: ";
    for(i=0;i<n;i++)
         for(j=0;j<n;j++)
            if(i==n-1-j){
            cout<<a[i][j]<<" ";
            }
            cout<<endl;

    int l_mari=0, l_mici=0, cifre=0;
    for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             if(islower(a[i][j])){l_mici++;}
             if(isupper(a[i][j])){l_mari++;}
             if(isdigit(a[i][j])){cifre++;}
                        }
         }
    cout<<"Lmici: "<<l_mici<< " Litere mari: "<<l_mari<<" Cire: "<<cifre;
}