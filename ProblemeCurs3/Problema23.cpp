/*
Să se scrie un program care afişează literele mari ale alfabetului în ordine crescătoare, iar
literele mici - în ordine descrescătoare.
*/

#include<iostream>
using namespace std;

int main(){
    char LitMare, LitMica;

    for (LitMare='A'; LitMare<='Z'; LitMare++){
        cout<<LitMare<<" ";
    }
    for(LitMica='z'; LitMica>='a';LitMica--){
        cout<<LitMica<<" ";
    }
    cout<<"\n";
    
    return 0;

}