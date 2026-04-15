#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    srand(time(0));
    int numerocasuale = rand() % 50+1;
    int num; 
    do{
    cout << "inserisci un numero per indovinare " << endl;
    cin >> num;

    if (num >numerocasuale) {
        cout << "troppo alto" << endl;
    } else {
        cout << "troppo basso" << endl;
    }
} while (num != numerocasuale);
cout << "hai indovinato" << endl;
}