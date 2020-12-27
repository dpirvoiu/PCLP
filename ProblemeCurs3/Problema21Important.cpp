/*Să se calculeze valoarea sumei urmatoare, cu o eroare EPS mai mică de 0.0001:
S=1+(x+1)/ 2! + (x+2)/ 3! + (x+3)/ 3! + ... , unde 0<=x<=1, x citit de la tastatură.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double T=1, S, S1, x, EPS; 
    long k=1;
    S=T;
    cout<<"x= ";cin>>x;
    cout<<"Precizie: "; cin>>EPS;

    do{
        S1=S;  // S1 preia suma pasului anterior
        T=pow(x,k)/k; 
        S+=T;
        k+=2;
    }while(fabs(S-S1)>=EPS); // Fabs= valoare absoluta
    cout <<"Nr Termeni="<<k<<"  T="<<T<<"   S="<<S<<'\n';

}