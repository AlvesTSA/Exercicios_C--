/* Faça um Programa que peça um número inteiro e determine se ele e par ou ímpar.*/

#include <iostream>
using namespace std;

int main(){

    int num = 0;

    cout << "Informe um número inteiro: " << endl;
    cin >> num;

    if (num % 2 == 0){

        cout << "Número par" << endl;
    }
    else{

        cout << "Número ímpar." << endl;
    }
    
    return 0;
    
}