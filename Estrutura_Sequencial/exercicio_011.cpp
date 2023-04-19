/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a)o produto do dobro do primeiro com metade do segundo .
b)a soma do triplo do primeiro com o terceiro.
c)o terceiro elevado ao cubo.        */

#include <iostream>

using namespace std;

int main(){

    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float produto = 0;
    float soma = 0;
    float cubo = 0;

    cout << "Informe o primeiro número: " <<endl;
    cin >> num1;
    
    cout << "Informe o segundo número: " <<endl;
    cin >> num2;

    cout << "Informe o terceiro número: " <<endl;
    cin >> num3;

    produto = 2*num1*(num2/2);
    soma = 3*num1 + num3;
    cubo = num3*num3*num3;

    cout << "O produto do dobro do primeiro com metade do segundo: " <<produto <<endl;
    cout << "A soma do triplo do primeiro com o terceiro: " <<soma <<endl;
    cout << "O terceiro elevado ao cubo: " <<cubo <<endl;

    return 0;


}