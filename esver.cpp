 //Leggi numeri finché 0. Stampa l’ultimo numero pari inserito
#include <iostream>
using namespace std;
int main() {        
    
    int num;
    int numdopo;
    int ultimopari;

    cout << "Inserisci numeri (0 per terminare): ";
    cin >> num; 

    while (num != 0) {
        cin >> numdopo;
        num = numdopo;
        if (numdopo % 2 == 0&& numdopo != 0) {
            ultimopari = numdopo;     
        }
    } 
    cout << "L'ultimo numero pari inserito è: " << ultimopari << endl; 
}       