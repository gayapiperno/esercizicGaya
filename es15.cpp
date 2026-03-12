//Chiedi all’utente il prezzo originale e la percentuale di sconto. Calcola il prezzo finale e stampalo. Ripeti finché l’utente non inserisce 0 come prezzo.
#include <iostream>
using namespace std;
int main() {
    double prezzoOriginale;
    double percentualeSconto;

    do {
        cout << "Inserisci il prezzo originale (0 per terminare): ";
        cin >> prezzoOriginale;

        if (prezzoOriginale != 0) {
            cout << "Inserisci la percentuale di sconto: ";
            cin >> percentualeSconto;

            double prezzoFinale = prezzoOriginale - (prezzoOriginale * (percentualeSconto / 100));
            cout << "Il prezzo finale è: " << prezzoFinale << endl;
        }
    } while (prezzoOriginale != 0);

    return 0;
}