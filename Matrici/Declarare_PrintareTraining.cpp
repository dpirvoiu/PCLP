#include<iostream>
using namespace std;

int main(){
    int i, n; // dimensiune
    double x[50], min, max; // Declararea matricei


    cout << "Introduceti dimensiunea: "; // introducerea dimensiunii
    cin>>n;

    cout << "\n" << "Introduceti cifrele: "; // introducerea elementelor
    for (i=0; i<n; i++){
        cin>>x[i];


}

    cout << "\n"<<"Matricea este: " << '\n'; // afisarea elementelor
    for (i=0; i<n; i++){
        cout<<x[i]<<" ";


}
    cout << "\n\n";    // afisarea minimului si a maximului
    for (i=0; i<n; i++)
        if(min>x[i])
        min=x[i];
    else if (max<x[i])
        max=x[i];

    cout << "\n" << "Minimul este: " << min<< "\n" << "Maximul este: " << max << endl;

}
