#include<iostream>
using namespace std;


double arieCerc(double raza, double PI=3.14){
    return 2*PI*raza*raza;
}

int main(){

    cout<<"Aria cercului de raza 2 este "<<arieCerc(2)<<'\n';
    cout<<"Aria cercului de raza 2 este "<<arieCerc(2, 3.141592)<<'\n';
}
