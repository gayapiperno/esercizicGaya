//Costruisci un vettore di N dimensione , moltiplica solo gli elementi con indice dispari.
#include <iostream>

#include <string>
using namespace std;

int main() {
    int N;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> N;

    int vettore[N]; // Vettore di dimensione N  
    cout << "Inserisci " << N << " elementi:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> vettore[i];
    }

    int prodotto = 1;
    for (int i =0; i < N; i++) { // Indici dispari
        if (i % 2 == 1) { // Controlla se l'indice è dispari
            prodotto *= vettore[i];
        }
    }

    cout << "Il prodotto degli elementi con indice dispari è: " << prodotto << endl;

    return 0;
}   