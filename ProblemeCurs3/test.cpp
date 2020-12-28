#include<iostream>
using namespace std;
int main()
{
    int x,ultima_c,ok=1;
    cout<<"x=";cin>>x;
    while(x && ok==1)
    {
        ultima_c=x%10;
        x=x/10;
        if(ultima_c<x%10) // Daca ultima_c este mai mica decat urmatoarea ultima cifra=FALS
            ok=0;
    }
    if(ok!=0)
        cout<<"DA!"<<endl;
    else
        cout<<"NU!"<<endl;
}