
#include<iostream>
using namespace std;

void modifica(int v[], int l){

    for(int i=0; i<l;i++)
        v[i] +=5;
}

int main(){

    int w[]={1,2,3,4},k=4;
    modifica(w,k);

    for(int i=0;i<k;i++)
        cout<<w[i]<<' ';
    return 0;
}
