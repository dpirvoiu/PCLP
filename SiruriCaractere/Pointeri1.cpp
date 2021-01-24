/*
Pointeri 1
*/
#include<iostream>


using namespace std;


int main(){
  int x, y, *ptr;
  x=5;

  cout<<"Adresa varibilei x este: " <<&x<<'\n';
  cout<<"Valoarea lui x este: "<<x<<'\n';

  ptr=&x; // atribuire: variabila ptr contine adresa variabilei x
  cout<<"Variabila poiner ptr are valoarea: "<<ptr;
  cout<<" si adresa obiectului: "<<*ptr<<'\n';

  y=*ptr; cout<<"y= "<<y<<'\n'; // cu ajutorl *ptr alocam valoarea lui x in y

  x=4; cout<<"x= " <<x<<'\n'; cout<<"*ptr= "<<*ptr<<'\n';
  cout<<y<<'\n';
}
