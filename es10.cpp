//Ad ogni iterazione, il programma deve chiedere: auto, moto. : benzina, diesel, elettrico e i km. Dopo aver calcolato il costo, chiedere se l’utente vuole inserire un altro veicolo.  Considera che (auto,benzina 0,15- auto,diesel 0,13- auto, elettrico 0,08- moto, benzina 0,07-moto,elettrico 0,04)
#include <iostream>
#include <string>
using namespace std;    
int main() {
    string veicolo, tipocarburante, risposta;
    int codice;
    double km, costo;                       
    do {                                
        cout << "Inserisci il tipo di veicolo (auto/moto): ";
        cin >> veicolo;
        cout << "Inserisci il tipo di carburante (benzina/diesel/elettrico): ";
        cin >> tipocarburante;
        cout << "Inserisci i km percorsi: ";
        cin >> km;
        if (veicolo == "auto") {
            if (tipocarburante == "benzina") {
                costo = km * 0.15;
            } else if (tipocarburante == "diesel") {
                costo = km * 0.13;
            } else if (tipocarburante == "elettrico") {
                costo = km * 0.08;
            } else {
                cout << "Tipo di carburante non valido." << endl;
                continue;
            }
        } else if (veicolo == "moto") {
            if (tipocarburante == "benzina") {
                costo = km * 0.07;
            } else if (tipocarburante == "elettrico") {
                costo = km * 0.04;
            } else {
                cout << "Tipo di carburante non valido." << endl;
                continue;
            }
        } else {
            cout << "Tipo di veicolo non valido." << endl;
            continue;
        }
        cout << "Il costo del viaggio è: " << costo << " euro." << endl;
        cout << "Vuoi inserire un altro veicolo? (si/no): ";
        cin >> risposta;    
    } while (risposta == "si" || risposta == "no");
    return 0;               
}