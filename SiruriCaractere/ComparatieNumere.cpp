/*
Verificam daca un si apare in altul Functia: strstr
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char nume[10],sir[100];
    cout<<"Introduceti numele ";
    cin.getline(nume,10); // Copiaza si spatiile.

    cout<<"Introduceti sirul: ";
    cin.getline(sir,100);
    if(strstr(sir,nume))
        cout<<nume<<" apare in sirul " <<sir<<"\n";
    else
        cout<<nume<<" nu apare in sirul " <<sir<<"\n";
}
