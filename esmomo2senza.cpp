/*Scrivi un programma in C++ che gestisce N caselli autostradali.
 Per ogni casello ci sono M veicoli. Per ogni veicolo inserire il tipo (auto, moto, camion). 
 Utilizzare array per memorizzare i dati.
  I pedaggi sono: auto 3€, moto 2€, camion 7€. 
  Il programma deve calcolare l’incasso di ogni casello,
   trovare il casello più trafficato,
 il casello con incasso maggiore e la percentuale di camion sul totale dei veicoli.*/ 
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int N, M;
    cout << "Inserisci il numero di caselli: ";
    cin >> N;
    cout << "Inserisci il numero di veicoli per casello: ";
    cin >> M;
    string tipi[N][M];
    double incassi[N];


    for (int i = 0; i < N; i++) {
        incassi[i] = 0; // Inizializza l'incasso del casello a 0
        for (int j = 0; j < M; j++) {
            cout << "Inserisci il tipo di veicolo " << j + 1 << " per il casello " << i + 1 << " (auto, moto, camion): ";
            cin >> tipi[i][j];

            if (tipi[i][j] == "auto") {
                incassi[i] += 3; // Pedaggio per auto
            } else if (tipi[i][j] == "moto") {
                incassi[i] += 2; // Pedaggio per moto
            } else if (tipi[i][j] == "camion") {
                incassi[i] += 7; // Pedaggio per camion
            }
        }
    }       
    // Trova il casello più trafficato
    int caselloPiuTrafficato = 0;
    for (int i = 1; i < N; i++) {
        if (incassi[i] > incassi[caselloPiuTrafficato]) {
            caselloPiuTrafficato = i;
        }
    }
    cout << "Il casello più trafficato è il casello " << caselloPiuTrafficato + 1 << " con un incasso di " << incassi[caselloPiuTrafficato] << endl;

    // Trova il casello con incasso maggiore
    int caselloMigliore = 0;
    for (int i = 1; i < N; i++) {
        if (incassi[i] > incassi[caselloMigliore]) {
            caselloMigliore = i;
        }
    }
    cout << "Il casello con l'incasso maggiore è il casello " << caselloMigliore + 1 << " con un incasso di " << incassi[caselloMigliore] << endl;

    // Calcola la percentuale di camion sul totale dei veicoli
    int totaleVeicoli = N * M;
    int totaleCamion = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (tipi[i][j] == "camion") {
                totaleCamion++;
            }
        }
    }
    double percentualeCamion = (static_cast<double>(totaleCamion) / totaleVeicoli) * 100;
    cout << "La percentuale di camion sul totale dei veicoli è: " << percentualeCamion << "%" << endl;

    return 0;
}       