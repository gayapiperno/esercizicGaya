/*Scrivi un programma in C++ che gestisce N negozi. Per ogni negozio ci sono M prodotti.
 Per ogni prodotto inserire il nome, il numero di unità vendute e il prezzo unitario. 
 Utilizzare array per memorizzare tutti i dati. Se le unità vendute sono maggiori di 50 
 applicare uno sconto del 10%, mentre se sono maggiori di 100 applicare uno sconto del 20%.
  Il programma deve calcolare l’incasso di ogni negozio,
 trovare il negozio con incasso maggiore e il prodotto più venduto dell’intera catena.*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int N, M;
    cout << "Inserisci il numero di negozi: ";
    cin >> N;
    cout << "Inserisci il numero di prodotti per negozio: ";
    cin >> M;   
    string nomi[N][M];
    int unitaVendute[N][M];
    double prezziUnitari[N][M];
    double incassi[N];
    for (int i = 0; i < N; i++) {
        incassi[i] = 0; // Inizializza l'incasso del negozio a 0
        for (int j = 0; j < M; j++)

        {
            cout << "Inserisci il nome del prodotto " << j + 1 << " per il negozio " << i + 1 << ": ";
            cin >> nomi[i][j];
            cout << "Inserisci il numero di unità vendute per " << nomi[i][j] << ": ";
            cin >> unitaVendute[i][j];
            cout << "Inserisci il prezzo unitario per " << nomi[i][j] << ": ";
            cin >> prezziUnitari[i][j];

            double incassoProdotto = unitaVendute[i][j] * prezziUnitari[i][j];

            // Applica sconto se necessario
            if (unitaVendute[i][j] > 100) {
                incassoProdotto *= 0.8; // Sconto del 20%
            } else if (unitaVendute[i][j] > 50) {
                incassoProdotto *= 0.9; // Sconto del 10%
            }

            incassi[i] += incassoProdotto; // Aggiungi l'incasso del prodotto all'incasso totale del negozio
        }
    }

    // Trova il negozio con l'incasso maggiore
    int negozioMigliore = 0;
    for (int i = 1; i < N; i++) {
        if (incassi[i] > incassi[negozioMigliore]) {
            negozioMigliore = i;
        }
    }
    cout << "Il negozio con l'incasso maggiore è il negozio " << negozioMigliore + 1 << " con un incasso di " << incassi[negozioMigliore] << endl;      
    // Trova il prodotto più venduto dell'intera catena
    int prodottoPiuVenduto = 0;
    int maxUnitaVendute = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (unitaVendute[i][j] > maxUnitaVendute) {
                maxUnitaVendute = unitaVendute[i][j];
                prodottoPiuVenduto = j; // Salva l'indice del prodotto più vend
            }
        }
    }
    cout << "Il prodotto più venduto è " << nomi[0][prodottoPiuVenduto] << " con " << maxUnitaVendute << " unità vendute." << endl;



    return 0;
}