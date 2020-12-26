/*
Functia 9
*/
#include<iostream>
#include<math.h>
using namespace std;

double x,f,result;

int main(){
    cout<<"Introduceti numarul: "; cin>>x;
    if(x>=0 && x<=1){
        f=exp(x-3);
        cout<<"f(x) este exp: "<< f<<endl;
    }else if(x>=1 &&x<=2){
        f=sin(x)+cos(x);
        cout<<"f(x) este sincos: "<< f<<endl;
    }else if(x>=2 &&x<=100){
        f=0.9*log(x+3);
        cout<<"f(x) este log: "<< f<<endl;
    }
}
