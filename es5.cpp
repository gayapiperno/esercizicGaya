#include <iostream>
#include  <string>
using namespace std;

int main() {
string parola;
int contavocali=0;
cout <<   "inserisci una parola" << endl;
cin >> parola;
for(char lettera:parola){
    if(lettera=='a'|| lettera=='e'|| lettera=='i'|| lettera=='o'||lettera=='u'){
        contavocali=contavocali+1;
    }
}
    
cout <<  "le vocali sono" << contavocali<< endl;

}
