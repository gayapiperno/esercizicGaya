//Costruire un vettore di N elementi e verificare se l’ultimo elemento è il maggiore di tutti
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    int numeri [n];

    // Inserisce i numeri nel vettore
    for (int i = 0; i < n; i++) {
        cout << "Inserisci l'elemento " <<endl;
        cin >> numeri[i];

    }   
    cout << "Gli elementi inseriti sono: " << endl;
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    }   
    


    int ultimoElemento = numeri[n - 1];
    bool UltimoMaggiore = true;       

    for (int i = 0; i < n - 1; i++) {
        if (numeri[i] > ultimoElemento) {
            UltimoMaggiore = false; 
        }}
      
    if (UltimoMaggiore==true) {
        cout << "L'ultimo elemento è il maggiore di tutti." << endl;
    } else {
        cout << "L'ultimo elemento non è il maggiore di tutti." << endl;
    }       
    
    return 0;}