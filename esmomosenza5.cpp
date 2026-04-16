//Leggere un array di interi di 10 posizioni
//e stampare il numero che compare più volte all'interno dell'array
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {{
    int vet[10];
    int numerochecedipiu=0;
    int numero;
    for(int i=0;i<10;i++ ){
        cout<<"inserisci il numero "<<endl;
        cin>>numero;
        vet[i]=numero;

    }
    for(int i=0;i<10;i++){
        int contatore=0;
        for(int j=0;j<10;j++){
            if(vet[i]==vet[j]){
                contatore++;
            }
        }
        if(contatore>numerochecedipiu){
            numerochecedipiu=contatore;
            numero=vet[i];
        }

    }
    cout<<"il numero che compare più volte è: "<<numero<<endl;

}