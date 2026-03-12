 //Genera un numero casuale tra 1 e 100. L’utente ha massimo 5 tentativi per indovinarlo.
//Alla fine stampa: "Hai vinto" oppure "Hai perso, il numero era ..."
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0)); // Inizializza il generatore di numeri casuali
    int numeroCasuale = rand() % 100 + 1; // Genera un numero casuale tra 1 e 100   
    int tentativo;
    int tentativiRimasti = 5;
    bool haVinto = false;           
    cout << "Indovina il numero tra 1 e 100. Hai 5 tentativi: ";   
    while (tentativiRimasti > 0 && !haVinto) {
        cin >> tentativo;

        if (tentativo < numeroCasuale) {
            cout << "Troppo basso. Riprova: ";
        } else if (tentativo > numeroCasuale) {
            cout << "Troppo alto. Riprova: ";
        } else {
            haVinto = true;
            cout << "Complimenti! Hai indovinato il numero!" << endl;
        }
        tentativiRimasti--;
    }
    if (!haVinto) {
        cout << "Hai perso, il numero era " << numeroCasuale  << endl;
    }      
    return 0;   
}