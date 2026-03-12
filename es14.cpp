//Chiedi numeri finché l’utente non inserisce 0, poi calcola somma, media, massimo e minimo.
#include <iostream>

using namespace std;
int main() {
    int numero;
    int somma = 0;
    int contanum = 0;
    int massimo = 0; // Inizializza al minimo intero
    int minimo = 999999; // Inizializza al massimo intero

    cout << "Inserisci numeri (0 per terminare): ";

    do {
        cin >> numero;

        if (numero != 0) {
            somma += numero;
            contanum++; 

            if (numero > massimo) {
                massimo = numero;
            }
            if (numero < minimo) {
                minimo = numero;
            }
        }
    } while (numero != 0);

    if (contanum > 0) {
        double media = (somma) / contanum;
        cout << "Somma: " << somma << endl;
        cout << "Media: " << media << endl;
        cout << "Massimo: " << massimo << endl;
        cout << "Minimo: " << minimo << endl;
    } else {
        cout << "Nessun numero inserito." << endl;
    }

    return 0;
}