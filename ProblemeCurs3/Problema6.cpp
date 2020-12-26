/*
Să se găsească toate numerele de două cifre care satisfac relaţia:
xy = ( x + y )^2 --> xy reprezinta o linie(vector)
*/
#include <iostream>
#include<math.h>

using namespace std;

double x,y,v;

int main(){
    cout << "Introduceti x: ";
    cin>>x;
    cout << "Introduceti y: ";
    cin>>y;

    v=sqrt(x*x+y*y); // norma vectorului xy

    if(v==(x+y)*(x+y))
    cout << "Success"<<endl;
    else cout << "Fail"<<endl; 
}           