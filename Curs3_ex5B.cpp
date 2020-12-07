/*
Se citeşte câte un caracter, până la întâlnirea caracterului @. Pentru fiecare
caracter citit, să se afişeze un mesaj care să indice dacă s-a citit o literă mare, o literă mică, o
cifră sau un alt caracter. Să se afişeze câte litere mari au fost introduse, câte litere mici, câte
cifre şi câte alte caractere.

FOR LOOP

*/

#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

    char c; 
    int lmic=0, lmare=0, lcif=0;
    int altcar=0;
    cout <<"Astept car.:"; cin>> c;
    for(;c!='@';){
        if(c>='A'&&c<='Z'){
            cout <<"Lit.mare\n";lmare++;}
            else if(c>='a'&&c<='z'){
                cout<<"Lit. Mica!\n";lmic++;
            }
            else if(c>='0'&&c<='9'){
                cout << "Cifra!\n";lcif++;
            }
            else{cout<<"Alt car!\n"; altcar++;}
            cout<<"Aştept car.:";cin>>c; // Loop infinit fara linia asta
        }
        cout<<"Ati introdus\n";
        cout<<lmare<<" Litere mari ";
        cout<<lmic<<" Litere mici\n";
        cout<<lcif<<lmic<<" Cifre si ";
        cout<<altcar<<" alte caractere\n";
        
    }