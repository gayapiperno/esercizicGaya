//Chiedi all’utente di scegliere un’operazione da fare su un vettore(costruiscilo generando i valori):
//1. Somma tutti gli elementi
//2. Prodotto degli elementi
//3. Trova il massimo.
//L'utente continua a scegliere l'opzione del menu fin quando non decide di uscire. 
#include <iostream>
#include <string>
using namespace std;    
int main() {
    int N;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> N;

    int vettore[N]; // Vettore di dimensione N  
    cout << "Inserisci " << N << " elementi:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> vettore[i];
    }

    int scelta;
    do {
        cout << "Scegli un'operazione da eseguire sul vettore:" << endl;
        cout << "1. Somma tutti gli elementi" << endl;
        cout << "2. Prodotto degli elementi" << endl;
        cout << "3. Trova il massimo" << endl;
        cout << "4. Esci" << endl;
        cin >> scelta;

        switch (scelta) {
            case 1: {
                int somma = 0;
                for (int i = 0; i < N; ++i) {
                    somma += vettore[i];
                }
                cout << "La somma di tutti gli elementi è: " << somma << endl;
                break;
            }
            case 2: {
                int prodotto = 1;
                for (int i = 0; i < N; ++i) {
                    prodotto *= vettore[i];
                }
                cout << "Il prodotto di tutti gli elementi è: " << prodotto << endl;
                break;
            }
            case 3: {
                int massimo = 0;
                for (int i = 0; i < N; ++i) {
                    if (vettore[i] > massimo) {
                        massimo = vettore[i];
                    }
                }
                cout << "Il massimo elemento è: " << massimo << endl;
                break;
            }
            case 4:
                cout << "Uscita dal programma." << endl;
                break;
            default:
                cout << "Scelta non valida. Riprova." << endl;
        }
    } while (scelta != 4);

    return 0;
}