 //Genera un vettore di 12 numeri casuali, chiedi un numero all’utente e stampa la posizione se esiste.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n = 12;
    int numeri[n];
srand(time(0));
    // Genera numeri casuali
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;
    }
    
for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    } 

    int numeroDaCercare;
    cout << "Inserisci un numero da cercare: ";
    cin >> numeroDaCercare;

    bool trovato = false;
    int posizione ;

    for (int i = 0; i <= n; i++) {
        if (numeri[i] == numeroDaCercare) {
            trovato = true;
            posizione = i;
            break; 

        }
    }

    if (trovato==true) {
        cout << "Il numero " << numeroDaCercare << " si trova alla posizione: " << posizione << endl;
    } else {
        cout << "Il numero " << numeroDaCercare << " non è stato trovato nel vettore." << endl;
    }

    
    return 0;
}