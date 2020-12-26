/*
Scrieţi un program care să verifice inegalitatea 1/(n+1) < ln[(n+1)/n] < 1/n, unde n este un
număr natural pozitiv, introdus de la tastatură.
*/
#include<iostream>
#include<math.h>
using namespace std;

double n, result;

int main(){
    cout<< "Introduceti numarul: ";
    cin >> n;

    if (1/(n+1)<log((n+1)/n)<1/n){
        cout<<"OK";
    }else if(1/(n+!)<log((n+1)/n)<1/n){

    }

}