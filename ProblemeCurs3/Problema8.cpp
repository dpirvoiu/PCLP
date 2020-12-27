/*
Scrieţi un program care să verifice inegalitatea 1/(n+1) < ln[(n+1)/n] < 1/n, unde n este un
număr natural pozitiv, introdus de la tastatură.
*/
#include<iostream>
#include<math.h>
using namespace std;

double n, a, b, c;

int main(){
    cout<< "Introduceti numarul: ";
    cin >> n;

    a=1/(n+1);
    b=log((n+1)/n);
    c=1/n;

    if (a<b && b<c) {
        cout<<"Ok"<<endl;
    }else cout << "Not ok"<<endl;
    return 0;
}