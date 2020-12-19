#include<iostream>
using namespace std;

int main(){
    int a=3;
    int b=5;
    int rez=~a;cout<<"~"<<a<<'='<<rez<<'\n';

    rez=a&b;cout << a<<'&'<<b<<'='<<rez<<'\n';

    rez=a^b; cout << a<<'^'<<'='<<rez<<'\n';
    
    rez=a|b;cout << a<<'|'<<b<<'='<<rez<<'\n';

    rez=a<<2;cout << a<<'<<'<<3<<'='<<rez<<'\n';

    rez=5>>2;cout << b<<'>>'<<2<<'='<<rez<<'\n';

}