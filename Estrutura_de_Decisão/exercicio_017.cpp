/*. Faça um Programa que peça um número correspondente a um determinado ano e em seguida informe se este ano é ou não bissexto.*/

#include <iostream>
using namespace std;

int main(){

    int ano = 0;

    cout << "Informe um ano: " << endl;
    cin >> ano;

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){

        cout <<  ano << "é um ano bissexto." << endl;

    }
    else{

        cout <<  ano << "não é um ano bissexto." << endl;

    }

    return 0;
    
}
