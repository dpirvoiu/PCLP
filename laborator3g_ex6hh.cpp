/*Să se calculeze suma şi produsul primelor n numere naturale, n fiind introdus
de la tastatură. Se vor exemplifica modalităţile de implementare cu ajutorul instrucţiunilor
n
while , do-while şi for . (Se observă că:
S =
∑ k , P =
k = 1
n
∏ k ). Variabilele P şi S vor fi
k = 1
utilizate pentru memorarea valorii produsului, respectiv sumei, iar k - variabilă contor - pentru
numărarea numărului de repetări a acţiunii (implementată printr-o instrucţiune bloc).*/

#include<iostream>

using namespace std;

int main(){

    cout << "n=";int n; cin>>n; // Numar introdus de la tastatura
    int S=0, P=1, i=1;          // Suma incepe de la - in timp ce produsul trebuie sa inceapa de la 1
    while(i<=n){                // folosim n(numarul introdus de la tastatura ca un counter)
        S+=i; P*=i;             // Calculam suma si produsul actualelor valori
        i++;                    // incrementam k si ne reintoarcem in loop
    }
    cout<<"P="<<P<<"\tS="<<S<<'\n';
}


//VARIANTA FOR-Initializare variabile in Expresia 1 si incrementare in contor(ex3)
// for(int S=0, P=1, k=1; k<=n; S+=k, P*=k, k++;)
// cout<<"P="<<P<<"\tS="<<S<<'\n';
