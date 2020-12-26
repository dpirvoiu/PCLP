/*
Să se citească un şir de numere reale, până la întâlnirea numarului 800 şi să se afişeze
valoarea minimă introdusă, suma şi produsul elementelor şirului.
*/

#include <iostream>
using namespace std;

int x[10], dimensiune, minim, produs, suma;

    

int main(){
    
    cout<< "Introduceti dimensiunea: ";
    cin>> dimensiune;

    for(int i=1; i<=dimensiune; i++){
        cin>>x[i];
    }
    for(int i = 1; i<=dimensiune; i++){
        cout <<x[i]<<" "<<endl;
    }
    for (int i=0; i<dimensiune; i++)
        if(i == 800 && minim>x[i])
        minim=x[i];
        cout << "Minimul este: " << minim << endl;
    
     for (int i=0; i<dimensiune; i++)
        if(i == 800 && minim>x[i])
        minim=x[i];
        cout << "Minimul este: " << minim << endl;
        
}