/*Sa se scrie cate o functie care sa Determine:

-CEL mai mare divizor comuni a doua numere intregi
-CEl mai MIC multiplu comun a doua numere intregi

-Euclid impartiri repetate

-CMMMC se va folosi relatia dintre cmmmc si cmmdc
cmmmc(a,b)=(a*b)/ cmmdc(a,b)
*/

#include <iostream>
using namespace std;

int cmmdc(int a, int b){
    int r;
    r=a%b;
    while(r!=0){
        a=b;
        b=r;
        r=a%b;
    
        }
        return b;     
}

int cmmmc(int a, int b){
    return((a*b)/cmmdc(a,b));
}
int main(){
    int x, y, divizor, multiplu;
    cout<< "Dati primul numar "; cin>>x;
    cout<< "Dati al doilea numar "; cin>>y;
    divizor= cmmdc(x,y);
    cout<<"Cmmdc este "<< divizor<<"\n";
    multiplu=cmmmc(x,y);
    cout<<"Cmmmc este "<<multiplu<<"\n";
}