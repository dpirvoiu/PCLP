/*
Se citeste un sir de caractere. Sa se afiseze cea mai des intalnita litera. Frecventa litera cea mai des intalnita
*/
#include<iostream>

#include<string.h>

using namespace std;

int main(){
    char sir[1000], carac_max,c;
    int i, frecv[256], max=0; // frecv vercor de frecventa
    cout<<"Dati sirul de caractere: ";
    cin.getline(sir,1000);
    for(i=0;i<256;i++) frecv[i]=0;
    for(i=0;i<strlen(sir);i++){
        c=sir[i];
        frecv[c]=frecv[c]+1;
        if(frecv[c]>max){
            max=frecv[c];
            carac_max=c;
        }
    }
    cout<<carac_max<<" apare de " <<max<<" ori";
}
