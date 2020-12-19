#include<iostream>
using namespace std;

int main(){
    double lmin, lmax,nr; cout<<"Numar= ";
    cin>>nr;

    cout<<"Limita inferioara a intervalului:"; cin>>lmin;

    cout<<"Limita superioara a intervalului: "; 
    cin >> lmax;
    
    cout<<(nr>=lmin && nr<=lmax);
}