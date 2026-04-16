 //Costruisci un vettore che ti permette di inserire dei numeri fin quando non inserisci lo zero. 
 //Stampa il vettore e la media dei numeri inseriti.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int vet[100]; // Vettore con dimensione massima di 100
    int numero;
    int count = 0; // Contatore per il numero di elementi inseriti
    int somma = 0; // Variabile per la somma dei numeri inseriti
    cout << "Inserisci numeri (inserisci 0 per terminare): " << endl;
    do {
        cin >> numero;
        if (numero != 0) {
            vet[count] = numero; // Inserisce il numero nel vettore
            somma += numero; // Aggiunge il numero alla somma
            count++; // Incrementa il contatore
        }


    } while (numero != 0 && count < 100); // Continua finché non si inserisce 0 o si raggiunge la dimensione massima    

    cout << "I numeri inseriti sono: " << endl;
    for (int i = 0; i < count; i++) {
        cout << vet[i] << endl; // Stampa i numeri inseriti
    }


    if (count > 0) {
        double media = static_cast<double>(somma) / count; // Calcola la media
        cout << "La media dei numeri inseriti è: " << media << endl; // Stampa la media
    } else {
        cout << "Nessun numero inserito." << endl; // Messaggio se non sono stati inseriti numeri
    }