/* Clculati f(x) stiind ca:
6x +20, x apartine lui -infinit
x+30, cand x apartine -7,0
sqrt(x) cand x>0 */

//Doua variante de implementare

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double x,f;
    cout<<"x=";
    cin>>x;
    if(x<=-7)
        f= -x*6+20;
    else if (x<=0) f=x+30;

    else f= sqrt(x);
    cout << "f="<<f<<'\n';
    
}

