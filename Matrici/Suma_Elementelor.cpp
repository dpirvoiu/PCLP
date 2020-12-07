// Suma elementelor unei Matrici

#include<iostream>
using namespace std;

int main(){
int a,b;

int Matrice1[10][10];
int Matrice2[10][10];
int MatriceSuma[10][10];

cout << "Introduceti numarul de linii si coloane:"<<endl;
cin>>a>>b;

cout << "Introduceti elementele Matricei 1:\n";

    for (int i=0; i<a;i++)
    for (int j=0; j<b; j++)
    cin>>Matrice1[i][j]; 
cout << "Introduceti elementele Matricei 2:\n";

    for (int i=0; i<a;i++)
    for (int j=0; j<b; j++)
    cin>>Matrice2[i][j]; // Salvam a doua matrice.

// Adunam Matricele si memoram in Matricea suma
     for (int i=0; i<a;i++)
     for (int j=0; j<b; j++)
     MatriceSuma[i][j]=Matrice1[i][j]+Matrice2[i][j];

// Afisam Matricea utilizand {} pentru despartirea elementelor

cout<<"Suma matricelor:\n";
for(int i=0;i<a;i++)
{
    for (int j=0; j<b; j++)
    cout<<MatriceSuma[i][j]<<"\t"; // Tabulator pentru afisarea elementelor
    cout << endl;
}
    return 0;
}