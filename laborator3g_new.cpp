/*Să se scrie un program care realizează conversia numărului N întreg, din baza
10 într-o altă bază de numeraţie, b<10 (N şi b citite de la tastatură). Conversia unui număr
întreg din baza 10 în baza b se realizează prin împărţiri succesive la b şi memorarea resturilor,
în ordine inversă.*/

#include<iostream>

using namespace std;

int main(){

   int nrcif=0,NumarInitial,baza,rest,BazaInitiala_show,p=1;
   long BazaNoua=0;

   cout<< "\nIntroduceti baza<10, baza= ";
   cin>>baza;
   cout<<"Introduceti numarul in baza 10, Numar Initial=";
   cin>>NumarInitial;BazaInitiala_show=NumarInitial;

   while(NumarInitial!=0){
    rest=NumarInitial%baza;
    NumarInitial/=baza;
    cout <<"nr="<<NumarInitial<<'\n';
    cout<<" rest="<<rest<<'n';
    nrcif++;
    BazaNoua+=rest*p;
    p*=10;
    cout<<"Nr. nou= "<<BazaNoua<<'\n';
   }


    cout <<"Numarul de cifre este "<<nrcif<<'\n';
    cout <<"Nr. in baza 10 "<<BazaInitiala_show;
    cout <<" convertit in baza "<<baza<<" este "<<BazaNoua<<'\n';

}


