//Genera un vettore di 10 numeri casuali e stampali in ordine inverso.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n = 10;
    int numeri[n];

    srand(time(0));

    // Genera numeri casuali
    for (int i = 0; i < n; i++) {
        numeri[i] = rand() % 100 + 1;
        
    }

    cout << "I numeri generati sono: ";
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    }
    

    cout << "I numeri in ordine inverso sono: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    return 0;
}