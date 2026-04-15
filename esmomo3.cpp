#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    cout << "Inserisci una parola: " << endl;
    string parola;
    cin >> parola;
    int contavocali = 0;
    for (int i = 0; i < parola.length(); i++) {
        char lettera=parola[i];
        if (lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera== 'o' || lettera == 'u') {
            contavocali++;
        }
    }
    cout << "La parola '" << parola << "' contiene " << contavocali << " vocali." << endl;
}