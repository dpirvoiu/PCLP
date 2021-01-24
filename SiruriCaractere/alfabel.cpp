/*
Declarare alfabet sir caractere
*/
#include<iostream>
using namespace std;

int main(){
    char sir[256];
    int i;
    for(i=0;i<26;i++)
        sir[i]='A'+i;
    sir[i]='\0';

    cout<<"Sirul de caractere contine "<<sir;
}