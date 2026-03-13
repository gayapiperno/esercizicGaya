// Genera 10 numeri casuali tra 1 e 100 e stampa solo quelli pari   

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand((time(0)));          



    cout << "Numeri casuali pari tra 1 e 100:" << endl;
    for (int i = 0; i < 10; ++i) {
        int numeroCasuale = rand() % 100 + 1; // Genera un  numero casuale tra 1 e 100              

        if (numeroCasuale % 2 == 0) { // Controlla se il numero è pari
            cout << numeroCasuale << endl; // Stampa il numero se è pari
        }
    }           





}
