/*
Să se scrie un program care citeşte o cifră. În funcţie de valoarea ei, să se facă următorul
calcul: dacă cifra este 3, 5 sau 7 să se afişeze pătratul valorii numerice a cifrei; dacă cifra
este 2, 4 sau 6 să se afişeze cubul valorii numerice a cifrei; dacă cifra este 0 sau 1 să se
afişeze mesajul "Valori mici"; altfel., să se afişeze mesajul "Caz ignorat!".
*/

#include<iostream>
using namespace std;

int a;

int main(){
    cout <<"Introduceti numarul: ";
    cin>>a;
    if(a==3 || a ==5 || a==7){
        cout << a*a<<endl;
    }
    else if(a==2 || a ==4 || a==6){
        cout<< a*a*a<<endl;
    }else if(a==0 || a==1){
        cout<<"Valori mici"<<endl;
    }else cout << "Caz ignorat"<<endl;
    return 0;
}