// Valoarea maximului dintre doua numere

#include<iostream>
using namespace std;

int main(){
    float a, b, max;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    if(a >= b){
        max = a;
    }
    else max = b;
    cout << "Maximul este:"<< max << endl;
}