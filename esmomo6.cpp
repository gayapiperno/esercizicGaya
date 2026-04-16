#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    int numero;
    int ultimonumero;
    do{
        cout<<"inserisci un numero"<<endl;
        cin>>numero;
        if(numero%2==0&& numero!=0){
            ultimonumero=numero;
           
        }

    }while(numero!=0);
    cout<<ultimonumero<<endl;}