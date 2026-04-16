 //Scrivere un programma che letto un numero scrive tutti i suoi divisori
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;
    cout << "I divisori di " << numero << " sono: ";
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << endl;
        }
    }
    
}