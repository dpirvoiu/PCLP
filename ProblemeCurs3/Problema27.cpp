/*
Să se citească câte un număr întreg, până la întâlnirea numărului 90. Pentru fiecare numar
să se afişeze un mesaj care indică dacă numărul este pozitiv sau negativ. Să se afişeze cel
mai mic număr din şir.
*/

#include<iostream>
using namespace std;

int main(){
    int x, nr_mic=1;

    do{
        cout<<"Introduceti nr: ";
        cin>>x;
        if(x<0){
            cout<<"Negativ"<<endl;
        }
        if(x>0){
            cout<<"Pozitiv"<<endl;
        }
        if(nr_mic>x) 
        nr_mic=x;

    }while(x!=90);
    cout<<"Cel mai mic nr: " <<nr_mic<<endl;
}