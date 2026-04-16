  //Leggere un array di interi 
 //con 8 numeri e dire quali e quanti di questi sono primi.
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int vet[8];
    int contatoreprimi=0;
    int numero;
    for(int i=0;i<8;i++ ){
        cout<<"inserisci il numero "<<endl;
        cin>>numero;
        vet[i]=numero;
        if (numero%1==0&&numero%numero==0)
        {
            contatoreprimi++;
            cout<<"il numero "<<vet[i]<<" è primo"<<endl;
        }
        
    }
    cout<<"i numeri primi sono: "<<contatoreprimi<<endl;
}