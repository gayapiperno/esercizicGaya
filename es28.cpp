//Costruire un vettore di N elementi  e controlla se tutti gli elementi del vettore sono uguali.
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
    bool tuttiUguali = true;

    for (int i = 1; i < n; i++) {
        if (numeri[i] != numeri[0]) {
            tuttiUguali = false; 
            break; 
        }
    }               
    if (tuttiUguali==true) {
        cout << "Tutti gli elementi del vettore sono uguali." << endl;
    } else {
        cout << "Non tutti gli elementi del vettore sono uguali." << endl;
    }       

    return 0;}