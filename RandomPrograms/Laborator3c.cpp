#include<iostream>

using namespace std;

int main(){
    int rezult, a=20, b=2,c=25,d=4;rezult=a-b;
    cout<<"a-b= "<<rezult<<'\n';
    rezult=a+b; cout<<"a+b= "<<rezult<<'\n';
    rezult=a*b; cout<<"a*b= "<<rezult<<'\n';
    rezult=a/d; cout<<"a/d= "<<rezult<<'\n';
    rezult=c%b; cout<<"c%b= "<<rezult<<'\n';
    rezult=c/b*d; cout<<"c/b*d= "<<rezult<<'\n';
    rezult=-b+a; cout<<"-b+a= "<<rezult<<'\n';
    rezult=-(b+a); cout<<"-(b+a)= "<<rezult<<'\n';
    rezult=b+c*d; cout<<"b+c*d= "<<rezult<<'\n';
    rezult=(b+c)*d; cout<<"(b+c)*d= "<<rezult<<'\n';
}