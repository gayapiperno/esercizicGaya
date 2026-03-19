//Chiedi all’utente di inserire n numeri in un array e trova il più piccolo
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;

    int numeri[n];

    for (int i = 0; i <= n; i++) {
        cout << "Inserisci il numero " << endl;
        cin >> numeri[i];
        
    }
    for (int i = 0; i < n; i++){

        cout << numeri[i] << " ";
    }
    cout << endl;
    

    int minimo =99999;
    for (int i = 0; i < n; i++) {
        if (numeri[i] < minimo) {
            minimo = numeri[i];
        }
       
    }

    cout << "Il numero più piccolo è: " << minimo << endl;

    
    return 0;
}