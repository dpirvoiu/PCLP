#include<iostream>
#include<math.h>

using namespace std;

int main(){
    double f,x;
    cin >>x;
    if(x<=-7){
        f=-6*x+20; 
    }
    else if(x>=-7 && x<=0){
        f=x+30;
    }
    else f=sqrt(x)+2; 
    
    cout<<f<<endl;
}
