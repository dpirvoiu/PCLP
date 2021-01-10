/*
Sa se scrie o functie care, folosind ca parametri doua siruri de caractere, notate a si b, arata daca a reprezinta sau nu prefixul lui b

EX: a="info" si b ="informatica"
*/
#include<iostream>
#include<string.h>
using namespace std;

int prefix(char s1[], char s2[]){

    int i=0,j, este_prefix=0;
    char temp[100];
    strcpy(temp,"");
    while(s1[i]!=0 && este_prefix==0){
        for(j=0;j<=i;j++) temp[j]=s1[j];
        temp[j+1]='\0';
        if(strcmp(temp,s2)==1) este_prefix=1; // compara string
        i++;
        strcpy(temp,"");
    }
    return este_prefix;
}

int main(){
    char a[100],b[100];
    cout<<"Dati primul sir de caractere ";
    cin.getline(a,100);
    cout<<"Dati al doilea sir de caractere ";
    cin.getline(b,100);
    if(prefix(a,b)==1)cout<<"Sirul "<<a<<" este prefix al sirului "<<b;


}
