/*
Să se calculeze aria unui triunghi, cunoscându-se mărimea laturilor sale. Numerele care
reprezintă mărimile laturilor vor fi introduse de utilizator. Se va testa mai întâi dacă cele 3
numere reprezentând mărimea laturilor pot forma un triunghi (a<= b+c, b<=c+a, c<=
a+b).
*/

#include <iostream>
#include<math.h>
using namespace std;

double a, b, c, s, aria;

int main(){
    
    cout<<"Introduceti a: ";
    cin >> a;
    cout<<"Introduceti b: ";
    cin >> b;
    cout<<"Introduceti c: ";
    cin >> c;
    s=(a+b+c)/2;
    if(a<=b+c && b<=c+a && c<= a+b){
        aria=sqrt(s*(s-a)*(s-b)*(s-c));
        cout << aria<<endl;
    }
    return 0;

}