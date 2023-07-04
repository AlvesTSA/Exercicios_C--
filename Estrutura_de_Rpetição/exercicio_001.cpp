/*Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.*/


#include <iostream>

using namespace std;

int main(){

    int nota = 0;

    do{
        cout << "Informe uma nota entre 0 e 10: " << endl;
        cin >> nota;
        
        if(nota <= 0 || nota >= 10){

            cout << "Nota invalida.\n";
        }
        else{

            cout << "Nota valida" << endl;
        }

    } while (nota <= 0 || nota >= 10);

    return 0;
    
}