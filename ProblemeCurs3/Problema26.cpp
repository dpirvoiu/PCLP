/*
Să se genereze toate numerele naturale de 3 cifre pentru care cifra sutelor este egală cu
suma cifrelor zecilor şi unităţilor.
*/

#include <iostream>
using namespace std;

int main(){
    int  numar2, prima_cifra, suma;
    
    
    
    for(int numar=1;numar<=999;numar++){

    numar2=numar;
    suma=0;
    while(numar2){
        
        prima_cifra=numar2/100;
        suma=suma+numar2%10;
        numar2=numar2/10;
            
        if(suma==prima_cifra && numar2!=0){
                cout<<suma<<endl;
                }


        }
     }
}