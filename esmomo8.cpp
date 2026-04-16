#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int vet[4];
    int vet2[4];
    int vetsomma[4];
    int numero;
    int numero2;
    for(int i=0;i<=3;i++){
        cout<<"inserisci un numero nel primo vettore"<<endl;
        cin>>numero;
        vet[i]=numero;
    }
    for(int i=0;i<=3;i++){
        cout<<vet[i]<<endl;
    }
    for(int i=0;i<=3;i++){
        cout<<"inserisci un numero nel secondo vettore"<<endl;
        cin>>numero2;
        vet2[i]=numero2;
    }
    for(int i=0;i<=3;i++){
        cout<<vet2[i]<<endl;
    }
     for(int i=0;i<=3;i++){
        vetsomma[i]=vet[i]+vet2[i];}
       
        for(int i=0;i<=3;i++){
            cout<<vetsomma[i]<<endl;}}

