/*
Functii Siruri Caractere Funcia: strcmp
*/
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char sir1[]="abcd", sir2[]="abcde";
    cout<<strcmp(sir1,sir2)<<"\n";

    cout<<strcmp(sir2,sir1)<<"\n";

    cout<<strcmp(sir1," ")<<" ";

    char str1[20]="hello";
    char str2[20]="goodbye";
    char str3[20]="";
    int diferenta, lungime;

    //Comparatie siruri de caractere strcmp
    cout<<"str1="<<str1<<" str2="<<str2<<"\n";

    diferenta = strcmp(str1,str2);
    if(diferenta==0)
        cout<<"Siruri echivalente! \n";
    else if(diferenta>0)
        cout<<str1<<" mai mare lexicografic decat "<< str2<<"\n";
    else
        cout<<str1<<" mai mic lexicografic decat "<< str2<<"\n";

    // Copiere siruri de caractere
    cout<<"str1= "<<str1<<"\n";
    cout<<"str3= "<<str3<<"\n";

    strcpy(str3,str1);
    cout<<"str1= "<<str1<<"\n";
    cout<<"str3= "<<str3<<"\n";

    strcpy(str3,str1);
    cout<<"str1= "<<str1<<"\n";
    cout<<"str3= "<<str3<<"\n";


}
