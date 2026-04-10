//Leggere un carattere e dire se è una lettera minuscola o maiuscola. Continua fin quando l'utente non decide di fermarsi.
#include <iostream>
#include <string>
using namespace std;
int main() {
    char carattere;
    string risposta;

    do {
        cout << "Inserisci un carattere: ";
        cin >> carattere;

        if (carattere >= 'a' && carattere <= 'z') {
            cout << "Il carattere è una lettera minuscola." << endl;
        } else if (carattere >= 'A' && carattere <= 'Z') {
            cout << "Il carattere è una lettera maiuscola." << endl;
        } else {
            cout << "Il carattere non è una lettera." << endl;
        }

        cout << "Vuoi inserire un altro carattere? (s/n): ";
        cin >> risposta;
    } while (risposta == "si");

    return 0;
}