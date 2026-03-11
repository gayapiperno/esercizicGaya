//Inserisci un codice errore: 400  allora Bad Request, 401 allora Unauthorized, 403 allora Forbidden, 404 allora Not Found, altro allora Errore sconosciuto, 200 allora corretto.  Fai un ciclo dove se l'utente sbaglia più di 3 volta allora esce
#include <iostream>
#include <string>
using namespace std;                
int main() {
    int tentativi=0, codice;
    
    while(tentativi<3){
cout << "Inserisci il codice di errore: ";
    cin >> codice;
        switch(codice){
            case 400:
                cout << "Bad Request" << endl;
                break;
                  tentativi++;
            case 401:
                cout << "Unauthorized" << endl;
                break;
                  tentativi++;
            case 403:
                cout << "Forbidden" << endl;
                break;
                  tentativi++;
            case 404:
                cout << "Not Found" << endl;
                break; 
                 tentativi++;
                 
                 case 200:
                cout << "Corretto" << endl;
                return 0;
            default:
                cout << "Errore sconosciuto" << endl;
                break;  
                tentativi++;
            
                }
      
       
    }
    return 0;
}
    