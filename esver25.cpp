//Verificare se due array hanno gli stessi elementi nella stessa posizione
#include <iostream>
#include <string>

using namespace std;
int main() {
    int n = 5;
    int array1[n];
    int array2[n];

    cout << "Inserisci 5 numeri per il primo array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }
    cout << "Inserisci 5 numeri per il secondo array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> array2[i];
    }
    bool sonoUguali = true; // Inizializza la variabile a true
    for (int i = 0; i < n; i++) {
        if (array1[i] != array2[i]) { // Confronta gli elementi nelle stesse posizioni
            sonoUguali = false; // Se trova una differenza, imposta la variabile a false
            break; // Esce dal ciclo
        }
    }
    if (sonoUguali==true) {
        cout << "I due array hanno gli stessi elementi nella stessa posizione." << endl;
    } else {
        cout << "I due array non hanno gli stessi elementi nella stessa posizione." << endl;
    }
    return 0;
}   