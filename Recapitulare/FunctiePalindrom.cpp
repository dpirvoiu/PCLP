/*Sa se scrie o functie care sa verifice daca un numar intreg este sau nu palidrom
Palindrom = Numarul este egal cu rasturnatul lui
*/

#include<iostream>
using namespace std;

int palindrom(int x){
     int z=0,y;
    y=x;

    while(x){
        z=z*10 + x%10;
        x=x/10;    // algoritm rasturnare
    }

    if(z==y) return 1;
    else return 0;   // returneaza adevarat sau fals catre functia main;
}

    int main(){
        int a;

        cout<<"Dati numarul a= ";
        cin>>a;

        if(palindrom(a)==1)
        cout<<"Numarula "<< a << " este palindrom \n";
        else
        cout<<"numarul "<< a << "Nu este palindrom\n";
    }