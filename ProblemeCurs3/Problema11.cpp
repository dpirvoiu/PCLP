/*
Să se scrie un program care calculează şi afişează minimul a 3 numere reale (a, b şi c)
citite de la tastatură
*/
#include <iostream>
using namespace std;

char a,b;

int main (){
    cout<<"Introduceti a: ";cin>>a;
    cout<<"Introduceti b: ";cin>>b;

    if (a<b){
        cout<<a<<" "<<b<<endl;
    }else if(b<a){
        
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}