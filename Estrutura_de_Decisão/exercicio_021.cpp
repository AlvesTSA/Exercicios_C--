/*
Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.Exemplo:326 = 3 centenas, 2 dezenas e 6 unidades
*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int centena = 0;
    int dezena = 0;
    int unidade = 0;

    cout << "Informe um número inteiro de 0 a 1000" << endl;
    cin >> num;

    centena = num/100;
    num %= 100;
    dezena = num/10;
    num %= 10;
    unidade = num;

    if(dezena >= 0 && dezena <= 1000){

        cout << "Centena: " << centena << "\nDezena: " << dezena << "\nUnidade: " << unidade << endl;

    }
    else{

        cout << "Informe um valor válido.";

    }

    return 0;

}

