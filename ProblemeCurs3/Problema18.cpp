/*
Se citesc câte 3 numere reale, până la întâlnirea numerelor 9, 9, 9. Pentru fiecare triplet de
numere citit, să se afişeze maximul.
*/
#include <iostream>
using namespace std;


int main(){
    int a,b,c, maximul;
    
    do{
    cout <<"A: "; cin >>a;
    cout <<"B: "; cin >>b;
    cout <<"C: "; cin >>c;
    
        if (a>b){
        maximul=a;
        a=b;
        b=maximul;

    }   if(b>c){ 
        maximul=b;
        b=c;
        c=maximul;
        
    }
     cout<<c<<endl;

    }while(a!=9 && b!=9 && c!=9);
    
    return 0;
}