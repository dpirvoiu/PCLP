/*
Să se citească 3 caractere care reprezintă 3 litere mici. Să se afişeze caracterele citite în
ordine alfabetică.
*/
#include <iostream>
using namespace std;

char a,b,c, aux;

int main (){
    cout<<"Introduceti a: ";cin>>a;
    cout<<"Introduceti b: ";cin>>b;
    cout<<"Introduceti c: ";cin>>c;

    if (a>b){
        aux=a;
        a=b;
        b=aux;

    }if(b>c){ 
        aux=b;
        b=c;
        c=aux;
        
    }if(a>b){
        aux=a;
        a=b;
        b=aux;   
     }
     cout<<a<<" "<<b<< " "<<c<<endl;
}