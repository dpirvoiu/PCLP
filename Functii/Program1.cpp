

#include<iostream>
using namespace std;



    int suma(int, int); // Declarare

    int main(){
        int x,y;
        cout<<"Da-mi doua numere intregi: ";
        cin>>x>>y;
        cout<<"Suma lor este " <<suma(x,y);
        return 0;
    }

    int suma(int a, int b){ // definire
    int rezultat = a+b;

    return rezultat;

}
