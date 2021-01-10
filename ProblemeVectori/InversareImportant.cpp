/*Sa se scrie un program C++ care sa reazlizeze inversarea unui vector
a) In acelasi vector fara a utiliza un vector suplimentar
b)intr-un alt vector 
*/

#include<iostream>
using namespace std;

int main(){
    unsigned int x[100],y[100],n,i,j,aux;

    cout<<"Dati numarul de elemente ale tabloului n= ";
    cin>>n;

    cout<<"Dati elementele tabloului";
    for(i=0;i<n;i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        y[i]=x[i]; // Pastram o copie a vectorului initial
    }
    cout<<"\nPunctul a)\n";
    cout<<"Elementele vectorului inainte de inversare sunt: \n";
    for(i=0;i<n;i++)

    {
        cout<<x[i]<<" ";
    }
    for(i=0;i<n/2;i++){   /// Inversare vector!!!
        aux=x[i];
        x[i]=x[n-i-1];
        x[n-i-1]=aux;
    }
    cout<<"\nElementele vectorului dupa inversare sunt: \n";
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }

    //Punctul B-> Intr-un alt vector

    for(i=0;i<n;i++)
    x[i]=y[i]; // Luam copia Vectorului

    cout<<"\n\nPunctul b)";
    cout<<"\nElementele vectorului inainte de inversare sunt: \n";

    for(i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }

    for(i=0;i<n;i++)
        y[i]=x[n-i-1];
    
    cout<<"\nElementele vectorului nou obtinut prin inversare sunt\n";
    for(i=0; i<n; i++)
    {
        cout<<y[i]<<" ";
    }

}