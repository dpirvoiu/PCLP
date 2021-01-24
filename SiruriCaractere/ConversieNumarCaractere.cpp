/*
Fisierul stdlib.h prelucreaza sirurile de caractere. Conversie din numar in sir si invers

Conversie din numere in sir de caractere

itoa = converteste un numar intreg intrun sir de caractere
ftoa converteste un numar real de simpla precizie intr un sir de caractere
ultoa converteste un numar de tip long unsigned intrun sir de caractere
*/
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
    int a= 54325;
    char buffer[20];
    itoa(a,buffer,2); // Aici 2 inseamna binar
    printf("Binary value= %s\n",buffer);

    itoa(a,buffer,10); // Aici 10 inseamna decimal
    printf("Binary value= %s\n",buffer);

    itoa(a,buffer,16); // Aici 16 inseamna hexa
    printf("Binary value= %s\n",buffer);
    return 0;
}
