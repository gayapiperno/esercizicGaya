//Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n = 5;
    int numeri[n];
    

int numero;
    // Genera numeri casuali
    for (int i = 0; i < n; i++) {
        cout << "Inserisci un numero: ";
        cin >> numero;

        numeri[i] = numero;
    }
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    }
    bool tuttiPari = true; // Inizializza la variabile a true
    for (int i = 0; i < n; i++) {
        if (numeri[i] % 2 != 0) { // Controlla se il numero è dispari
            tuttiPari = false; // Se trova un numero dispari, imposta la variabile a false
            break; // Esce dal ciclo
        }
    }
    if (tuttiPari==true) {
        cout << "Tutti i numeri dell'array sono pari." << endl;
    } else {
        cout << "Non tutti i numeri dell'array sono pari." << endl;
    }
    return 0;
}