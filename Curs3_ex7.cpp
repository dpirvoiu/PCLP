/*Să se citească un şir de numere reale, până la întâlnirea numărului 900. Să se
afişeze maximul numerelor citite. */

#include <iostream>
using namespace std;

int main(){
    double n;
    cout <<"Introdu numaru:\n"; cin>>n;
    double max=n; 
    while(n!=900){
        if (n>=max)
            max=n;
        cout<<"Introdu nr:";
        cin>>n;
    }
    cout <<"Max sir este:"<< max<<'\n';
}