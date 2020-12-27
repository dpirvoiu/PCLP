/*
Fie şirul lui Fibonacci, definit astfel:f(0)=0, f(1)=1, f(n)=f(n-1)+f(n-2) pentru n>1.
Să se scrie un program care implementează algoritmul de calcul al şirului Fibonacci.
*/
#include<iostream>
using namespace std;

int f,n;
int main(){
    cout<<"Introduceti numarul: ";
    cin >> n;
    if(n>1){
        f=(n-1)+(n-2);
    }
    cout<<f<<endl;
    return 0;
}
