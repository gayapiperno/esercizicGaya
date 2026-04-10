 //Crea un programma che continua a far inserire all’utente dei numeri interi, il programma si ferma quando vengono inseriti più numeri negativi di quelli positivi.
#include <iostream>

#include <string>

using namespace std;

int main() {
    int contapositivi= 0;
    int contanegativi = 0;
    int numero;

    do{
        cout << "Inserisci un numero intero: ";
     cin >> numero;

        if (numero > 0) {
            contapositivi++;
        } else if (numero < 0) {
            contanegativi++;
        }

        
    }while(contapositivi >= contanegativi );

    
}