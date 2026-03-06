#include <iostream>
#include  <string>
using namespace std;

int main() {
string frase;
int contavocali=0;
cout <<   "inserisci la frase" << endl;
cin >> frase;
getline(cin,frase);
for(int i = 0 ;i<frase.length();i++){
    char c=frase[i];
   switch(c){
    case 'a':
    contavocali=contavocali+1;
     break;
     case 'e':
    contavocali=contavocali+1;
     break;
     case 'i':
    contavocali=contavocali+1;
     break;
     case 'o':
    contavocali=contavocali+1;
     break;
     case 'u':
    contavocali=contavocali+1;
     break;
     default:continue;

    }}

    
cout <<  "le vocali sono" << contavocali<< endl;

}