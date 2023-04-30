/*Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.*/

#include <iostream>

using namespace std;

int main(){

    int valor = 0;

    cout << "Informe um valor: \n";
    cin >> valor;

    if (valor > 0){

        cout << "O valor é positivo";

    }
    else{
        
        cout << "o valor é negativo" << valor;

    }
    
    return 0;

}