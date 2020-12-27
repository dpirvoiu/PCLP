/*
Să se scrie un program care calculează şi afişează maximul a 3 numere reale (a, b şi c)
citite de la tastatură.
*/
#include <iostream>
using namespace std;

int a,b,c,maximul;

int main (){
    cout<<"Introduceti a: ";cin>>a;
    cout<<"Introduceti b: ";cin>>b;
    cout<<"Introduceti c: ";cin>>c;

    if (a>b && a >c){
        maximul=a;
        cout<<"Maximul este a: "<<maximul<<endl;
    }else if(b>a && b>c){
        maximul=b;
        cout<<"Maximul este b: "<<maximul<<endl;
    }else if(c>a && c>b){
        maximul=c;
        cout<<"Maximul este c: "<<maximul<<endl;
    }
    return 0;
}