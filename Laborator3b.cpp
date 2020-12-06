#include<iostream>
using namespace std;

int main(){
    int a=9;cout<<"a++"<< a ++<<'\n';
    cout<<"a="<<a<<'\n';
    a=9;
    cout<<"++a"<<++a<<'\n';
    cout<<"a="<<a<<'\n';
    a=9;
    cout<<"a--="<<a--<<"\n";
     a=9;
    cout<<"--a="<<--a<<"\n";
    cout<<"a="<<a<<'\n';
    int z,x=3; z=x++-2;
    cout<<"z="<<z<<'\n';
    cout<<"x="<<x<<'\n'; 
    x=3;z=++x-2;cout<<"z="<<z<<'\n';
    cout<<"x="<<x<<'\n';
}