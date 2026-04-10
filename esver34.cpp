//Dopo aver letto e memorizzato 8 numeri in un array, calcolare la somma di quelli negativi e memorizzare zero al loro posto.
#include <iostream>
using namespace std;

int main() {
    int numeri[8];
    int sommanegativi = 0;
int numero;
    cout << "Inserisci 8 numeri: ";
    for (int i = 0; i < 8; i++) {
        cin >> numero; 
        numeri[i] = numero;       
        if (numeri[i] < 0) {
            sommanegativi += numeri[i];
            numeri[i] = 0;
        }
    }

    cout << "Somma dei numeri negativi: " << sommanegativi << endl;
    cout << "Array modificato: ";
    for (int i = 0; i < 8; i++) {
        cout << numeri[i] << " ";
    }
    return 0;
}