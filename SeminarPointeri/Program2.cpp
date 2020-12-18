#include<iostream>
using namespace std;

int v[5], *pv=v;

int main(){
    for(int i=0;i<5;i++)
        v[i]=i;
    cout<<"Adresa Vectorului "<<endl;
    cout<<"pv= "<<pv<<endl;
    cout<<"Adresa componentelor vectorului "<<endl;
    for(int i=0;i<5;i++){
        pv=&v[i];
        cout<<"v["<<i<<"] are valorarea "<<v[i]<<" si adresa: "<<pv<<endl;
    }

    }
