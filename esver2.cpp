//Inserisci parole in un vettore finché l’utente digita "STOP".
#include <iostream>

#include <string>

using namespace std;
int main() {
    string parole[100];
    string parola;
    int n = 0;
    
    cout << "Inserisci parole (digita 'STOP' per terminare): ";
    while (parola != "STOP"&& n < 100) {
        cin >> parola;  
        if (parola == "STOP") {
            break;
        }
        parole[n] = parola;
        n++;
    }

    cout << "Hai inserito le seguenti parole:" << endl;
    for (int i = 0; i < n; i++) {
        cout << parole[i]  << endl;
    }

    return 0;
}