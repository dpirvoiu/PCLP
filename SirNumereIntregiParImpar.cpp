/*
intr-un sir de numere intregi sa se afiseze suma elementelor de pe pozitiile pare si suma celor de pe pozitii impare.
*/

#include<iostream>
using namespace std;

int main(){
    int v[5], suma1=0,suma2=0;

    for (int i=1; i<=5; i++){
    cout<<"v["<<i<<"]"<<"\n";
    cin>>v[i];}

    for(int i=2;i<=5;i+=2){
        suma1=suma1+v[i];}
    
    for(int i=1; i<=5; i+=2){
        suma2=suma2+v[i];}
    
    cout<<suma1<<" "<<suma2;
}