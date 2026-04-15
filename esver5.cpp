//Esercizio 1: Leggere un array di interi di 10 posizioni e stampare il numero che compare più volte all'interno dell'array
#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int arr[SIZE];          


    cout << "Inserisci 10 numeri interi:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }               


    int maxCount = 0;
    int mostFrequent = arr[0];
    for (int i = 0; i < SIZE; i++) {
        int count = 1; 
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }   