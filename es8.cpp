//L’utente inserisce numeri finché non scrive -1. Alla fine il programma calcola la media


#include <iostream>
using namespace std; 
    



int main() {
    int n, somma=0, i=0;
    cout << "Inserisci un numero: ";
    cin >> n;
while(n!=-1){
    somma=somma+n;
    i++;
    cout << "Inserisci un numero: ";
    cin >> n;
}
if(i>0){
    cout << "La media è: " << somma/i << endl;
}
else{
    cout << "Non hai inserito numeri validi." << endl;
}   

    return 0;
}   








