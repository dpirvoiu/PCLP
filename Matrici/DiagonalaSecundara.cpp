/*matrice diagonala secundara*/

#include <iostream>
using namespace std;

int main()
{
int a,b;
char Test[10][10];

cout << "Introduceti numarul de linii=";
cin>>a;
cout << "Introduceti numarul de coloane=";
cin >> b;

    for(int i=0; i<a; i++)
    for(int j=0; j<b;j++)
    cin >> Test[i][j];

    for (int i=0; i<a;i++){
    for(int j=0;j<b;j++)
    cout << Test[i][j] << "\t";
    cout << "\n";
}

    cout << "\n\n"; 

    for (int i=0; i<a;i++){
    for(int j=0;j<b;j++)
    if(i+j==b-1) 
    cout << Test[i][j]<< "\t";
    
}
cout << "\n\n"; 


return 0;
}