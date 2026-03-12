// Sono dati N dipendenti. Per ogni dipendente: stipendio base, tipo contratto. Se: Tempo pieno +15% , Part-time  +10% , Stage → +5%. Stampare stipendio finale, totale stipendi.
#include <iostream>
#include <string>

using namespace std;    


int main(){
    int N;
    cout << "Inserisci il numero di dipendenti: ";
    cin >> N;

    double totaleStipendi = 0.0;

    for (int i = 0; i < N; i++) {
        double stipendioBase=1000.0;
        string tipoContratto;

        cout << "Inserisci il tipo di contratto (Tempo pieno, Part-time, Stage): ";
        cin >> tipoContratto;

        double aumento = 0.0;

        if (tipoContratto == "Tempo pieno") {
            aumento = 0.15; 
        } else if (tipoContratto == "Part-time") {
            aumento = 0.10; 
        } else if (tipoContratto == "Stage") {
            aumento = 0.05;
        }

        double stipendioFinale = stipendioBase + (stipendioBase*aumento);

        cout << "Stipendio finale: " << stipendioFinale << endl;

        totaleStipendi += stipendioFinale;
    }

    cout << "Totale stipendi: " << totaleStipendi << endl;

    return 0;
}