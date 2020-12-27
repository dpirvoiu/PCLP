/*
Să se citească un şir de numere reale, până la întâlnirea numarului 800 şi să se afişeze
valoarea minimă introdusă, suma şi produsul elementelor şirului.
*/

#include <iostream>
using namespace std;

int main(){
    int a,i=1, p=1, s=0, min=800;
    do{
        cout<<"A: ";cin>>a;
        s+=a;
        p*=a;
        if(p==0){   // Cizmarie pe genunchi! Revino la randul asta
            p=1;
        }
        
        if(min>a){
            min=a;
        }
    cout << "Suma: "<<s<<"\t"<<"Produs: "<<p<<"\t"<<"Minim: "<<min<<endl;
    }while(a!=800);
    return 0;
}
    

