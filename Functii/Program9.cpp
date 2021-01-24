
#include<iostream>
using namespace std;


void modifica(int& a){

    a=a+5;
    cout<<"a are valoarea: "<<a<<'\n';

}

int main(){
    int x=1;
    cout<<"x inainte de apel:= "<<x<<'\n';
    modifica(x);
    cout<<"x dupa de apel:= "<<x<<'\n';
    return 0;

    }
