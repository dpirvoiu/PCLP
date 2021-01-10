/*
Sa se scrie un program care sa calculeze reuniunea a doua multimi de cate n, respectiv m numere intregi memorate cu ajutorul vectorilor
*/

#include <iostream>
using namespace std;

int main(){
    int a[100], b[100], c[100];
    int n,m,i,j,k,ok;

    cout<<"Dati Cardinalul multimii A. n= ";
    cin>>n;
    cout<<"Dati elementele multimii A \n";
    for(i=0;i<n;i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }

    cout<<"Dati Cardinalul multimii B. m= ";
    cin>>m;
    cout<<"Dati elementele multimii B \n";

    for(i=0;i<m;i++){
        cout<<"B["<<i<<"]:";
        cin>>b[i];
    }

    //Copiem Elementele din multimea A in Multimea C

      for(i=0;i<n;i++)
      c[i]=a[i];

      k=n;

      for(j=0;j<m;j++){
          ok=1; //Variabila care verifica daca un element apartine sau nu multimii A
          for(i=0;i<n;i++)
            if(b[j]==a[i]) // Elementul din B apartine si lui a nu il adaugam in reuniunea C
            ok=0;

            if(ok==1){
                k++;
                c[k]=b[j];
            }
      }
    
    cout<<"\n Elementele multimii reuniune sunt: \n";
    for(i=0;i<k;i++){
        
        cout<<c[i]<<" ";
    }

}