//Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n = 5;
    int numeri[n];
    srand(time(0)); // Inizializza il generatore di numeri casuali con un seme basato sul tempo corrente


    // Genera numeri casuali
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1; // Genera un numero casuale tra 1 e 100

        
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