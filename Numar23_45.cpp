/*
a. Sa se scrie un program care afiseaza toate numerele cuprinse intre 23 si 45.

b. Sa se modifice programul de mai sus astfer incat sa nu afiseze numarul 30.
*/

#include<iostream>
using namespace std;

int main(){
    int n=23;

    do{
        n++;
        if(n>23 && n<45 && n!=30)cout<<n<<" ";

    }while(n);
}