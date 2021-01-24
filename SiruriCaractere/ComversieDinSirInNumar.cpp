/*
Fisierul stdlib.h prelucreaza sirurile de caractere. Conversie din numar in sir si invers

aftof = conversie din sir de char in numar de simpla precizie
atoi  = conversie sir de caractere in numar intreg
atol  = conversie sir de caractere intr un numaar intreg de tip long
strtod = conversie sir de caractere intr un numaar real dubla precizie
strtol = conversie sir de caractere intr un numaar real de tip long
*/
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int numar_int;
    float numar_real;
    long numar;
    numar_int=atoi("6789");
    numar_real=atof("12.345");
    numar=atol("1234567890L");
    cout<<numar_int<<" "<< numar_real<<" "<< numar;
}
