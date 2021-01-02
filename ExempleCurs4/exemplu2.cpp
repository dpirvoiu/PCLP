#include <iostream>
using namespace std;

int main(){
    int a[10][10], nr_linii,nr_coloane, i,j;

    cout<<"Introduceti nr de linii:";
    cin>>nr_linii;
    cout<<"Introduceti nr de coloane:";
    cin>>nr_coloane;

    for(i=0;i<nr_linii;i++)
        for(j=0;j<nr_coloane;j++){
            cout<<"Introduceti elementele matricei: ";
            cin>>a[i][j];
        }

    for(i=0;i<nr_linii;i++){
        for(j=0;j<nr_coloane;j++)
        cout<<a[i][j]<<" ";
        cout<<"\n\n";
        }


    for(i=0;i<nr_linii;i++){
        for(j=0;j<nr_coloane;j++)
        cout<<a[j][i]<<" ";
        cout<<"\n\n";
        }

    for(i=4;i>=0;i--){
        for(j=4;j>=0;j--)
        cout<<a[i][j]<<" ";
        cout<<"\n";
        }

}