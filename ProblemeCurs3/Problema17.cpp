/*
Să se citească câte 2 numere întregi, până la întâlnirea perechii (0, 0). Pentru fiecare
pereche de numere, să se calculeze şi să se afişeze cel mai mare divizor comun.
*/
#include <iostream>
using namespace std;

int a,b,r;
int main(){
    
    do{
    cout <<"A: ";cin>> a;
    cout <<"B: "; cin >>b;
    r= a%b;
    a=b;
    b=r;
    cout << a << endl;
    }while(a!=0 && b!=0);
    
    return 0;
}