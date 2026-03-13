//Chiedi un numero all’utente e conta quanti numeri sono inseriti e fermati quando l'utente decide di fermarsi.
#include <iostream>
using namespace std;
int main() {
    int numero, contatore=0;
    char scelta;

    do {
        cout << "Inserisci un numero: ";
        cin >> numero;
        contatore++;

        cout << "Vuoi inserire un altro numero? (si/no): ";
        cin >> scelta;
    } while (scelta == 'si' );

    cout << "Hai inserito " << contatore << " numeri." << endl;

    return 0;
}