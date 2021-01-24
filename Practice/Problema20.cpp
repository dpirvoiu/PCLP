#include <iostream>
using namespace std;

int intreg_la_cub(int);
float real_la_cub(float);

int main(){
    cout<<"Intreg la cub este: "<<intreg_la_cub(3)<<endl;
    cout<<"Real la cub este: "<<real_la_cub(3.3)<<endl;


}

int intreg_la_cub(int a){
    return(a*a*a);
}
float real_la_cub(float a){
    return(a*a*a);
}

