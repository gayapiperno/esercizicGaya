//Leggi numeri finché l’utente inserisce 0. Verifica se tutti i numeri inseriti sono uguali altrimenti stampa diversi
#include <iostream>
using namespace std;
 
int main() {


    int num;
    int numdopo;
    bool tuttiuguali = true;

    cout << "Inserisci numeri (0 per terminare): ";
    cin >> num; 

   do{
        cin >> numdopo;
        num = numdopo;
        if (numdopo != num) {
            tuttiuguali = false;
            
        }
        
       
    } while (num != 0) ;
    if (tuttiuguali==true) {
        cout << "Tutti i numeri inseriti sono uguali." << endl;
    } else {
        cout << "I numeri inseriti sono diversi." << endl;
    }             }