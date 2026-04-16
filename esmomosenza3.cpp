 //Scrivi un programma che legge un array di N voti. Rimuovi tutti i valori minori di 6. 
 //Alla fine stampa il nuovo array e quanti sono stati eliminati.
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Inserisci il numero di voti: ";

    cin >> N;
    int voti[N];
    for (int i = 0; i < N; i++) {
        cout << "Inserisci il voto " << i + 1 << ": ";
        cin >> voti[i];
    }
    int nuoviVoti[N]; // Array per i voti maggiori o uguali a 6
    int countEliminati = 0; // Contatore per i voti
    int j = 0; // Contatore per i nuovi voti
    for (int i = 0; i < N; i++) {
        if (voti[i] >= 6) {
            nuoviVoti[j] = voti[i]; // Aggiungi il voto
            j++;
        } 
    }
    cout << "Nuovo array: ";
    for (int i = 0; i < j; i++) {
        cout << nuoviVoti[i] <<endl;
    }
    
    cout << N-j << endl;
  
}