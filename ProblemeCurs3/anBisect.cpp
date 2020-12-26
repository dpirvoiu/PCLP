/*
Să se citească un numar natural n. Să se scrie un program care afişează dacă numărul n
citit reprezintă sau nu, un an bisect (anii bisecţi sunt multipli de 4, exceptând multiplii de
100, dar incluzând multiplii de 400).
*/

#include<iostream>
using namespace std;

int n;
int main(){
    cout << "Introduceti anul: "; 
    cin >> n;

    if(n%4==0 && n%100!=0 && n%400!=0)
    cout << "An bisect!"<< endl;
    else cout << "Anul nu este bisect!"<< endl;
}