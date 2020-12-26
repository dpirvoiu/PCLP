int a;

int main(){
    cout <<"Introduceti numarul: ";
    cin>>a;
    if(a==3 || a ==5 || a==7){
        cout << a*a<<endl;
    }
    else if(a==2 || a ==4 || a==6){
        cout<< a*a*a<<endl;
    }else if(a==0 || a==1){
        cout<<"Valori mici"<<endl;
    }else cout << "Caz ignorat"<<endl;
}