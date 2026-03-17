//Genera un vettore di 10 numeri casuali e calcola la somma degli elementi nelle posizioni pari
#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int main() {
    int n = 10;
    int* numeri = new int[n];
    srand(time(0));

    // Genera numeri casuali
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;

    }   
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    }   
    int sommaPosizioniPari = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Controlla se la posizione è pari
            sommaPosizioniPari += numeri[i]; // Aggiunge l'elemento alla somma se la posizione è pari
        }
        i++;
    }  

    cout << "La somma degli elementi nelle posizioni pari è: " << sommaPosizioniPari << endl;       

 }      
    
