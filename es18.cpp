//Chiedi un numero all’utente e stampa: "Radice quadrata = ..." se il numero è positivo , "Numero non valido" se è negativo.
 // Usa la libreria  #include <cmath> per  la funzione sqrt()
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero >= 0) {
        cout << "Radice quadrata = " << sqrt(numero) << endl;
    } else {
        cout << "Numero non valido" << endl;
    }

    return 0;
}