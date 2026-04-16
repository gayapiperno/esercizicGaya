/*Scrivi un programma che legge un array di N numeri interi. 
Il programma deve controllare, per ogni numero inserito, se è un numero primo. 
Successivamente deve calcolare
 e stampare la somma di tutti i numeri primi presenti nell’array.*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main(){
    int n;
    int numero;
    int sommaprimi=0;
    cout<<"Inserisci n" <<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"inserisci il numero"<<endl;
        cin>>numero;
        if(numero%1==0&&numero%numero==0){
            cout<<"il numero è primo"<<endl;
            sommaprimi=sommaprimi+numero;
        }       
    }
     for(int i=0;i<n;i++){
        cout<<"la somma dei numeri primi è "<<sommaprimi<<endl;
}}