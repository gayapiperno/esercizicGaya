//Memorizzare in un array di dieci posizioni i primi dieci numeri naturali.
#include <iostream>
using namespace std;

int main() {
    int numeri[10];
    for (int i = 0; i < 10; i++) {
        numeri[i] = i + 1; // Assegna i primi dieci numeri naturali
    }
    for (int i = 0; i < 10; i++) {
        cout << numeri[i] << " ";
    }
    return 0;
}       
