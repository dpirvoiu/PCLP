
/*
RECURSIVE
*/

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0) // Conditia de terminare
        return 1;
    else
        return n*fact(n-1);
}

int main(){

    cout<<fact(0)<<'\n';
    cout<<fact(3)<<'\n';
    cout<<fact(8)<<'\n';
    return 0;
}

