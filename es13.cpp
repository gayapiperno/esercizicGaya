// Fai generare al programma un numero casuale tra 1 e 50. L’utente deve indovinarlo, e il programma dice “troppo alto” o “troppo basso” finché non indovina 
// Funzione per generare un numero random è:  rand() % 50 + 1 (genera un numero casuale tra 1 e 50)
// Aggiungi le libreria della funzione random: #include <cstdlib> , #include <ctime>
// Inizializza il generatore di numeri casuali altrimenti ti genera sempre lo stesso numero:  il codice è : srand(time(0));
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;   
int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    int numeroCasuale = rand() % 50 + 1; // Genera un numero casuale tra 1 e 50
    int tentativo;

    cout << "Indovina il numero tra 1 e 50: ";

    do {
        cin >> tentativo;

        if (tentativo < numeroCasuale) {
            cout << "Troppo basso. Riprova: ";
        } else if (tentativo > numeroCasuale) {
            cout << "Troppo alto. Riprova: ";
        } else {
            cout << "Complimenti! Hai indovinato il numero!" << endl;
        }
    } while (tentativo != numeroCasuale);

    return 0;
}