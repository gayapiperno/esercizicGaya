#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    cout << "Inserisci un numero: " << endl;
    int num;
    cin >> num;
    int prodotto = 1;
    for(int i=1; i<=num; i++){ // int i=num; i>=1; i--
        
        prodotto=prodotto*i;
        
    }
    cout << prodotto << endl;
}