/*Aria si petrimetrul triunghiului*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float a, b, c, aria, perimetru;
    cout<<"Introduceti dimensiunile laturilor: "<<endl;
    cin>>a;cin>>b;cin>>c;
    perimetru=a+b+c;
    cout << "Perimetru Triunghilui este "<<perimetru;
    perimetru=perimetru/2;
    aria=sqrt(perimetru*(perimetru-a)*(perimetru-b)*(perimetru-c));
    cout << " Aria este "<< aria<<endl;
}
