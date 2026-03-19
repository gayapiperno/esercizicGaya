//Chiedi all’utente quanti numeri vuole inserire (n) e calcola la loro media usando un array  
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    double numeri[n];
    double somma = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero " << i << ": ";
        
        cin >> numeri[i];
        somma += numeri[i];
        
    }
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;       


    double media = somma / n;
    cout << "La media dei numeri inseriti è: " << media << endl;

    return 0;
}