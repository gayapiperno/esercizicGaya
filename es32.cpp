//Crei un vettore statico di N elementi. Mostri un menù con le opzioni:
//Conta elementi pari
//Conta elementi dispari
//Somma elementi pari
//Somma elementi dispari
// Esci
//Ripetere il menù finché l’utente non decide di uscire, dai la possibilità all'utente se scegliere di continuare con lo stesso vettore o di generare un vettore diverso.
#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> N;   
    int vettore[N]; // Vettore di dimensione N
    cout << "Inserisci " << N << " elementi:" << endl;
    for (int i = 0; i < N; ++i) {   
        cin >> vettore[i];
    }   
    int scelta;
    do {
        cout << "Scegli un'operazione da eseguire sul vettore:" << endl;
        cout << "1. Conta elementi pari" << endl;           
        cout << "2. Conta elementi dispari" << endl;
        cout << "3. Somma elementi pari" << endl;
        cout << "4. Somma elementi dispari" << endl;
        cout << "5. Esci" << endl;      

        cin >> scelta;  

switch (scelta) {
            case 1: {
                int conta= 0;
                for (int i = 0; i < N; ++i) {
                    if (vettore[i] % 2 == 0) {
                        conta++;
                    }
                }
                cout << "Il numero di elementi pari è: " << conta << endl;
                break;
            }
            case 2: {
                int conta= 0;
                for (int i = 0; i < N; ++i) {
                    if (vettore[i] % 2 != 0) {
                        conta++;
                    }
                }
                cout << "Il numero di elementi dispari è: " << conta << endl;
                break;
            }
            case 3: {
                int somma= 0;
                for (int i = 0; i < N; ++i) {
                    if (vettore[i] % 2 == 0) {
                        somma += vettore[i];
                    }
                }
                cout << "La somma degli elementi pari è: " << somma << endl;
                break;
            }
            case 4: {
                int somma= 0;
                for (int i = 0; i < N; ++i) {
                    if (vettore[i] % 2 != 0) {
                        somma += vettore[i];
                    }
                }
                cout << "La somma degli elementi dispari è: " << somma << endl;
                break;
            }     
             case 5:      
            cout << "Uscita dal programma." << endl;      
            break;
            default:
                cout << "Scelta non valida. Riprova." << endl;
        }
    } while (scelta != 5);  
    
    
    return 0;
            }
            
        