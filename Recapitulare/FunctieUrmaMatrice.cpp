/*Sa se scrie o functie care sa calculeze si sa afiseze urma unei matrice patratice luate ca parametru

Urma unei matrice patratice este suma elementelor aflate pe diagonala principala
*/

#include<iostream>
using namespace std;

int urma(int a[10][10], int n){
    int suma= 0, i, j;

    for (i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i==j)suma=suma+a[i][j];
    return suma;
}

int main(){
    int a[10][10], i, j, n, u;
    cout<<"Dati numarul de linii si coloane n= ";
    cin>>n;
    cout<<"Dati elementele matricei \n";

    for(i=1;i<=n;i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j];
    cout<<"Matricea este: \n";
    for(i=1; i<=n; i++){
        for(j=1;j<=n; j++){
            cout.width(4);
            cout<<a[i][j];        }
    }
    cout<<"\n";
    u=urma(a,n);
    cout<<"Urma matricei este "<<u;
    return 0;
}


