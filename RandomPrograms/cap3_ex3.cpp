/*Să se citească de la tastatură un număr real. Daca acesta se află în intervalul
[-1000, 1000], să se afiseze 1, dacă nu, să se afiseze -1. Pentru rezolvarea acestei probleme
poate fi folosit atât operatorul condiţional (capitolul 2.5.1.), cât şi instrucţiunea if.*/

#include <iostream>
using namespace std;

int main (){
double nr;
cout<< "Astept numar:"; 
cin >> nr;

int afis = (nr>=-1000 && nr<=1000?1:-1);
cout << afis<< "\n";

}
