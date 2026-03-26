//Genera un vettore di 10 elementi di valore casuali e sostituisci i pari con lo 0
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

     int N = 10;
    int vettore[N];

    // Inizializza il generatore di numeri casuali
    srand(time(0));

    // Genera valori casuali e sostituisci i pari con 0
    for (int i = 0; i < N; ++i) {
        vettore[i] = rand() % 100; // Genera un numero casuale tra 0 e 99
        if (vettore[i] % 2 == 0) { // Controlla se il numero è pari
            vettore[i] = 0; // Sostituisci i numeri pari con 0
        }
    }

    // Stampa il vettore risultante
    cout << "Vettore con i numeri pari sostituiti da 0:" << endl;
    for (int i = 0; i < N; ++i) {
        cout << vettore[i] << " ";
    }
    cout << endl;

    return 0;
}