/*Sa se realizeze suma patratelor a doua numere introduse de la tastatura*/
#include<iostream>

using namespace std;

int a,b,s;

int suma(int x, int y){
    int rez=x+y;
    return (rez);

}

void patrat(int *z){

    *z=*z* *z;
}

int main(){

    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    patrat(&a);
    patrat(&b);
    cout<<"Primul numar patrat este: "<<a<<endl;
    cout<<"Al doilea numar patrat este: "<<b<<endl;
    cout<<"Suma patratelor numerelor este: "<<suma(a,b);

}
