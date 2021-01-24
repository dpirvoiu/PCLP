/*Sa se afle elementul minim dintr-un vector de 10 elemente.
Sa scriu doua functii, de citire si de aflare a elementului minim
*/

#include <iostream>
using namespace std;

int min_tab(int a[], int nr_elem){
int elm=a[0];
for(int ind=0;ind<nr_elem;ind++)
    if (elm>=a[ind]) elm=a[ind];
return elm;

}

void citireVector(int b[], int nr_elm){
    for(int ind=0;ind<nr_elm;ind++){
        cout<<"Elem "<<ind+1<<"="; cin>>b[ind];
    }
}




int main(){
int a[10];int n; cout<<"Numar elem: "; cin>>n;
citireVector(a,n);
int min=min_tab(a,n); cout<<"Elem minim= "<<min<<'\n';


}

