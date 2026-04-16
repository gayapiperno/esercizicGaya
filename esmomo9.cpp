//Costruisci un array di 5 numeri, verifica se tutti i numeri dell’array sono pari
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int array[5];
    int contapari=0;
    int numero;

    for (int i = 0; i < 5; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numero;
        array[i] = numero;
        if (array[i] % 2 == 0) {
            contapari++;
        }
    }

    if (contapari == 5  ) {
        cout << "Tutti i numeri sono pari." << endl;
    } else {
        cout << "Non tutti i numeri sono pari." << endl;
    }

    return 0;
}
    
