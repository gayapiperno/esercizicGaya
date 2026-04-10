//Genera un array di 10 numeri e verificare se al suo interno ci sono almeno 3 numeri pari.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n = 10;
    int numeri[n];
    srand(time(0)); // Inizializza il generatore di numeri casuali con un seme basato sul tempo corrente
   
    for (int i = 0; i < n; i++) {
       numeri[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;  
    }
    int contapari = 0;
    for (int i = 0; i < n; i++) {
        if (numeri[i] % 2 == 0) { // Controlla
            contapari++; // Incrementa il contatore se il numero è pari
        }
    }

    if (contapari >= 3) {
        cout << "Ci sono almeno 3 numeri pari nell'array." << endl;
    } else {
        cout << "Non ci sono almeno 3 numeri pari nell'array." << endl;
    }
    return 0;
}
