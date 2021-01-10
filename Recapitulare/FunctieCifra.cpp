/*Sa se scrie o functie cifra(n,m) care are ca rezultat valoarea celei de-a m-a cifre de la dreapta la sstanga a numarului n scris in sistem zecimal*/

#include<iostream>

using namespace std;

int cifra(int numar, int pozitie){

    int cif, i=0;

    while(numar){
        i++;
        cif=numar%10;
        if(i==pozitie) return cif;
        numar =numar/10;
    }
}

int main(){
    int n,m;
    cout<<"Dati numarul n= ";
    cin>>n;
    cout<<"Dati pozitia unei cifre m= ";
    cin>>m;
    cout<<"Pozitia celei de-a doua "<<m<<" cifra a numarului "<<n<<" este = "<<cifra(n,m);
}