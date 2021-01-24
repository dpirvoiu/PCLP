/*
Sa se afiseze cu litere mari un text dat, de maxim 255 caractere
*/
#include<iostream>

#include<string.h>

using namespace std;

int main(){

    char text[100];
    char vocale[]="aeiou";
    int contor=0;
    cout<<"Introduceti Textul: ";
    cin.getline(text,100);

    for(int i =0; i<strlen(text); i++)
            for(int j=0;j<strlen(vocale);j++)
                if(text[i]==vocale[j])
                contor++;
    cout<<"Exista "<< contor<<" Vocale intext";
}
