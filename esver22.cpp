//Inserisci parole in un vettore finché l’utente digita "STOP". Chiedi un numero N. Stampa solo le parole con lunghezza maggiore di N.
#include <iostream>
#include <string>   

using namespace std;




int main() {
    string parole[100];
    string parola;
    int n = 0;
    
    cout << "Inserisci parole (digita 'STOP' per terminare): ";
    while (parola != "STOP" && n < 100) {
        cin >> parola;  
        if (parola == "STOP") {
            break;
        }
        parole[n] = parola;
        n++;
    }

    int N;
    cout << "Inserisci un numero N: ";
    cin >> N;

    cout << "Le parole con lunghezza maggiore di " << N << " sono:" << endl;
    for (int i = 0; i < n; i++) {
        if (parole[i].length() > N) {
            cout << parole[i] << endl;
        }
    }

    return 0;
}