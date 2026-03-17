//crea un vettore di 10 stringhe e stampa solo le parole con lunghezza maggiore di 4 caratteri
#include <iostream>
#include <string>
using namespace std;

int main() {
    string* parole = new string[10];
    parole[0] = "Ciao";
    parole[1] = "Palestra";
    parole[2] = "Esercizi";
    parole[3] = "C++";
    parole[4] = "Informatica";
    parole[5] = "Scuola";
    parole[6] = "Macchina";
    parole[7] = "Prof";
    parole[8] = "Diritto";
    parole[9] = "Amenta";

    cout << "Parole con lunghezza maggiore di 4 caratteri:" << endl;
    for (int i = 0; i < 10; i++) {
        if (parole[i].length() > 4) {
            cout << parole[i] << endl;
        }
    }

    return 0;
}