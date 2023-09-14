/*13. Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.*/

#include <iostream>

using namespace std;

int main(){

    int base = 0;
    int expoente = 0;
    int resultado = 0;
    int i = 0;

    cout <<"Informe a base: ";
    cin >> base;
    cout <<"Informe o expoente: ";
    cin >> expoente;

    resultado = base;

    for (i = 1; i < expoente; i++){

        resultado *= base; 
    }

    cout <<"Resultado = " <<resultado;

    return 0;
    
}