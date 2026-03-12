
 //Sono dati N biglietti. Per ogni biglietto si conoscono: prezzo base, tipo di cliente. Applicare lo sconto: Studente → 30% , Adulto → 5% , Over 65 → 40%. Stampare il totale incassato.
#include <iostream>
#include <string>

using namespace std;                    

int main(){
    int N;
    cout << "Inserisci il numero di biglietti: ";
    cin >> N;

    double totaleIncassato = 0.0;

    for (int i = 0; i < N; i++) {
        double prezzoBase=10.0;
        string tipoCliente;

        
        
        cout << "Inserisci il tipo di cliente (Studente, Adulto, Over 65): ";
        cin >> tipoCliente;

        double sconto = 0.0;

        if (tipoCliente == "Studente") {
            sconto = 0.30; 
        } else if (tipoCliente == "Adulto") {
            sconto = 0.05; 
        } else if (tipoCliente == "Over 65") {
            sconto = 0.40;
        }

    
        double prezzoScontato = prezzoBase - (prezzoBase*sconto);

        totaleIncassato += prezzoScontato;
    }

    cout << "Totale incassato: " << totaleIncassato << endl;

    return 0;
}
    