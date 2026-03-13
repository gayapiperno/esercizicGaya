//Chiedi numeri finché l’utente non digita 0 e somma solo quelli dispari
#include <iostream>
using namespace std;
int main() {


    int numero, sommaDispari=0; 


    do {
        cout << "Inserisci un numero (0 per terminare): ";
        cin >> numero;

        if (numero % 2 != 0) { // Controlla se il numero è dispari
            sommaDispari += numero; // Aggiunge il numero alla somma se è dispari
        }
    } while (numero != 0); // Continua finché non inserisce 0      

}