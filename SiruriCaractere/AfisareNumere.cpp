/*
a. Sa se scrie un program care afiseaza toate numerele cuprinse intre 23 si 45.

b. Sa se modifice programul de mai sus astfer incat sa nu afiseze numarul 30.
*/
#include<iostream>


using namespace std;



int main(){

int vect[10], i, suma=0;

for(i=0;i<10;i++){
    cout<<"Valoare "<<i<<'\n';
    cin>>vect[i];
}
for(i=0; i<10; i++){
    if(i%2!=0){
    suma=suma+vect[i];}
}
cout<<"Suma pozitii impare: "<<suma<<"\n";
    cout<<"\n";
    suma=0;
for(i=0; i<10; i++){
    if(i%2==0){
    suma=suma+vect[i];}}
    cout<<"Suma pozitii pare: "<<suma<<"\n";
}
