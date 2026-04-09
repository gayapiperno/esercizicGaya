//Genera un array di 10 numeri e verificare se al suo interno ci sono almeno 3 numeri pari.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n = 10;
    int numeri[n];
    
   int numero;
    for (int i = 0; i < n; i++) {
        cout << "Inserisci un numero: ";
        numeri[i] = numero;
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
