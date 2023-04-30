/* Faça um Programa que verifique se uma letra digitada é vogal ou consoante.*/

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout << "Informe uma letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' ||letra == 'U'){

        cout << "VOGAL";

    }
    else{

        cout << "CONSOANTE";
        
    }

    return 0;

}