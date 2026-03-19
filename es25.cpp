//Genera un vettore di 10 nomi casuali e trova la posizione di "Anna". Prima costruisci un vettore di 5 elementi con i nomi possibili. Ad esempio: string nomiPossibili[5] = {"Luca", "Anna", "Marco", "Sara", "Paolo"};
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main() {
    int n = 10;
    string nomi[n];
    string nomiPossibili[5];
    nomiPossibili[0] = "Luca";
    nomiPossibili[1] = "Anna";
    nomiPossibili[2] = "Marco";
    nomiPossibili[3] = "Sara";
    nomiPossibili[4] = "Paolo";
    srand(time(0));     

    // Genera nomi casuali
    for (int i = 0; i < n; i++) {
        int indiceCasuale = rand() % 5; // Genera un indice casuale tra 0 e 4
        nomi[i] = nomiPossibili[indiceCasuale]; // Assegna un nome casuale al vettore
    }           
    cout << "I nomi generati sono: " << endl;
    for (int i = 0; i < n; i++) {
        cout << nomi[i] << endl;
    }       
      
    // Trova la posizione di "Anna"
    bool trovato = false;   

    for (int i = 0; i < n; i++) {
        if (nomi[i] == "Anna") {
            trovato = true;
            cout << "Il nome 'Anna' si trova alla posizione: " << i << endl;
            break; 
        }
    }     }      