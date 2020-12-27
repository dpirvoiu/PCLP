/*
Proiectaţi un algoritm care să afişeze toţi divizorii primi ai unui număr întreg.  

*/
#include<iostream>
using namespace std;

int numar, putere;

int main(){
    cout <<"Introduceti numarul: ";
    cin >> numar;
    int divizor=2;
    while(numar > 1)
    {
        if(numar % divizor ==0)
        {
            putere=0;
            while(numar &divizor ==0)
            {
                putere = putere +1;
                numar = numar/divizor;
            }
            cout<< divizor<<" la puterea " << putere << "\n";
        }
        divizor++;
    }
    return 0;
}