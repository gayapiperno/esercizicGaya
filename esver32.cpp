//L’utente inserisce un numero maggiore di uno e il programma continua a calcolare le potenze del numero inserito fino a quando una potenza supera 5000.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int numero;
    cout << "Inserisci un numero maggiore di 1: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "Il numero deve essere maggiore di 1." << endl;
        return 0; // Termina il programma se il numero non è valido
    }

    int potenza = 1; // Inizializza la potenza a 1 (numero^0)
    int esponente = 0; // Inizializza l'esponente a 0

    while (potenza <= 5000) {
        cout << numero << "^" << esponente << " = " << potenza << endl;
        esponente++; // Incrementa l'esponente
        potenza = pow(numero, esponente); // Calcola la nuova potenza
    }

    return 0;
}