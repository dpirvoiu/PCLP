/*
Se citeşte câte un caracter până la întâlnirea caracterului @. Să se afişeze numărul literelor
mari, numarul literelor mici şi numărul cifrelor citite; care este cea mai mare (lexicografic)
literă mare, literă mică şi cifră introdusă.
*/

#include<iostream>
using namespace std;

int main(){
    int count_mare=0;
    int count_mica=0; 
    int count_cifra=0;
    char a, cea_mai_Mare,cea_mai_Mica, cifra_mare;

    do{
    cout<<"Introduceti caracterul: ";
    cin >> a;
    if(a>='a' && a<='z'){
        if(cea_mai_Mica<a){
            cea_mai_Mica=a;
        }
        count_mica++;
    }
    else if(a>='A' && a<='Z'){
        if(cea_mai_Mare<a){
            cea_mai_Mare=a;
        }
        count_mare++;
    }
    else if(a>='0' && a<='9'){
    
    if(cifra_mare<a){
            cifra_mare=a;
        }
        count_cifra++;
    }
    }while(a!='@');

    cout<<count_mica<<" "<<count_mare<<" "<<count_cifra<<endl;
    cout<<cea_mai_Mica<<" "<<cea_mai_Mare<<" "<<cifra_mare<<endl;
}