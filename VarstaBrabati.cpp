#include<iostream>
using namespace std;

int main(){
    int varsta_barbati, n, count1 = 0, i;
    cout<<"Cati Barbati"<<endl;
    cin>>n;

    do{
        cout<<"Introduceti barbat";
        cin>>i;

        if(i>65 && n<99) count1++;
        n--;

    }while(n);
    cout<<count1;
}