#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int num;
    int conta=0;
    string risposta;
    int somma=0;
    int media;
    do{
        cout << "Inserisci un numero " << endl;
        cin >> num;
        conta=conta+1;
        somma=somma+num;
        cout << "vuoi continuare? " << endl;
        cin>>risposta;
    } while (risposta=="si");
    media=somma/conta;
    cout << "Hai inserito " << conta << " numeri" << endl;
    cout << "La somma dei numeri è " << somma << endl;
    cout << "La media dei numeri è " << media << endl;
    
    }
