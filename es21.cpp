//Genera un vettore di 10 numeri casuali tra 1 e 50 e trova il massimo e la sua posizione
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n= 10;
    int* numeri = new int[n];

    
    srand(time(0));

    // Genera numeri casuali tra 1 e 50
    for (int i = 0; i <= n; i++) {
        numeri[i] = rand() % 50 + 1;
    }

    // Trova il massimo e la sua posizione
    int massimo = 0;
    int posizioneMassimo = 0;


    for (int i = 0; i <= n; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
            posizioneMassimo = i;
        }
    }

    cout << "Il vettore generato è: ";
    for (int i = 0; i < n; i++) {
        cout << numeri[i] << endl;
    }
    

    cout << "Il numero massimo è: " << massimo << " e si trova alla posizione: " << posizioneMassimo << endl;

    return 0;
}