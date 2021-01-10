/*
Se considera o matrice A=n X n avand componente numere intregi.

Sa se determine maximul fiecarei coloane si minimul fiecarei linii
*/

#include<iostream>
using namespace std;

int main(){
    int n,m,i,j,a[30][30],min,max;
    cout<<"Numar linii= "; cin>>n;
    cout<<"Numar Coloane= "; cin>>m;

    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            cout<<"a["<<i+1<<"]["<<j+1<<"]=";
            cin>>a[i][j];
        }
    cout<<"Elementele matrice A sunt: \n";
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n";
        
    }

    // Calculam Minimele pentru fiecare linie

    for(i=0;i<n;i++){
        min=a[i][0];
            for(j=0;j<m;j++)
            if(a[i][j]<min) min=a[i][j];
        cout<<"Minimul pe linia "<<i<<" este  "<<min<<"\n\n";
    }

    // Maximele fiecare coloana

    for(j=0;j<m;j++){
        max=a[0][j];
        for(i=0;i<n;i++)
            if(a[i][j]>max) max=a[i][j];
        cout<<"Max pe coloana "<<j<<" este  "<<max<<"\n";
}
}