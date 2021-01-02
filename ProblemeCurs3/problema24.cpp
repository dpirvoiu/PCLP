/*
Să se scrie un program care generează toate numerele perfecte până la o limită dată, LIM.
Un număr perfect este egal cu suma divizorilor lui, inclusiv 1 (exemplu: 6=1+2+3).
*/
#include<iostream>
using namespace std;

int main(){
    int numar_limita, i=1, j, s;
    cout<<"Introduceti numarul: ";
    cin>>numar_limita;

    do{
        s=0;
        j=1;
        do{
            if(i%j==0)
                s+=j;
            j++; // loop interior ce vede variabila externa i, din loopul exterior.
        }while(j<=i/2);
        if (s==i)
            cout<<i<<" "<<endl;
        i++;  // Loopul extern ce afecteaza variabila interna j.
    }while(i<=numar_limita);
}
