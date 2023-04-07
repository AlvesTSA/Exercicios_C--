//Faça um Programa que peça dois números e imprima a soma.

#include <iostream>
using namespace std;

int main(){

    float num1 = 0;
    float num2 = 0;
    float soma = 0;

    cout << "Informe o primeiro número: " <<endl;
    cin >> num1;

    cout << "Informe o segundo número: " <<endl;
    cin >> num2;

    soma = num1 + num2;

    cout << "A soma é igual a : " <<soma <<endl;

    return 0;

}