/*
Să se citească de la tastatură elementele unei matrici de maxim 10 linii şi 10 
coloane. Să se afişeze matricea citită. 
*/

#include<iostream>
using namespace std;

int main(){

    int A[10][10]; int nr_lin, nr_col;
    cout<<"Nr.linii:";cin>>nr_lin;
    cout<<"Nr.col:";cin>>nr_col;
    int i,j;
    //citirea elementelor

    for(i=0;i<nr_lin;i++)
        for(j=0;j<nr_col;j++){
            cout<<"A["<<i<<","<<j<<"]="; //mesaj
            cin>>A[i][j];
        }
    //Afisarea elementelor

    for(i=0;i<nr_lin;i++){
        for(j=0;j<nr_col;j++)
        cout<<A[i][j]<<'\t';
        cout<<'\n';
    }
}