/*
Sa se afiseze cu litere mari un text dat, de maxim 255 caractere
*/
#include<iostream>

#include<string.h>

using namespace std;

int main(){
   char sir[255];
   cout<<"Introduceti textul: ";
   cin.getline(sir,255);
   for(int i=0; sir[i]!=0;i++)
        if(sir[i]>='a'&& sir[i]<='z') sir[i]=sir[i]-'a'+'A';
   cout<<sir;
}
