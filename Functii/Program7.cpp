

#include<iostream>

using namespace std;

//Aria patratului
double arie(double lungime){
    return lungime*lungime;
}
//Aria Dreptunghiului
double arie(double lungime, double latime){
    return lungime*latime;
}

int main(){

    cout<<"Aria Patratului de L=2 este "<<arie(2.0)<<'\n';
    cout<<"Aria Dreptunghiului de L=3 si l=4 este "<<arie(3.0,4.0)<<'\n';
    return 0;
}
