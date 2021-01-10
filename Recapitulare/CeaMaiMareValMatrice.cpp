/*
Sa se scrie un program care sa calculeze, pe rand, cea mai mare valoare din fiecar elinie a unei matrici cu n linii si m coloane, sa se afle cea mai mare valoare din matrice.
*/

#include<iostream>
using namespace std;
float maxim(float x[], int m){
    int j;
    float max=x[0];
    for(j=0;j<m;j++)
        if(x[j]>max) max=x[j];
    return max;
}

int main(){
    float a[40][40], vector_max[40], maximul;

    int i,j,n,m;
    cout <<"Introduceti numarul de linii n= "; cin>>n;
    cout <<"Introduceti numarul de coloane m= "; cin>>m;
    for (i=0;i<n;i++)  //citirea matricei
        for(j=0;j<m;j++){
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    cout <<"Afisarea matricei citite:\n";
    for (i=0;i<n;i++){            
        for (j=0;j<m;j++){
            cout.width(10);
            cout<<a[i+1][j+1];
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++){
        maximul=maxim(a[i],m);
        cout<<"\nvaloarea maxima pe linia "<<i+1<<" este "<<maximul;
        vector_max[i+1]=maximul;
    }
    cout<<"\nValoarea maxima din matrice este= "<<maxim(vector_max,m);

}