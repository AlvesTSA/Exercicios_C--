/* Faça um Programa que leia um número e exiba o dia correspondente da semana. (1- Domingo , 2- Segunda, etc). Se digitar outro valor, deve aparecer “valor inválido.*/

#include <iostream>

using namespace std;

int main(){

    int dia = 0;

    cout << "Informe um valor de 1 a 7: ";
    cin >> dia;

    switch (dia){

    case 2:
        cout << "SEGUNDA";

        break;
    
    case 3:
        cout << "TERÇA FEIRA";
        
        break;
    
    case 4:
        cout << "QUARTA FEIRA";
        
        break;
    
    case 5:
        cout << "QUINTA FEIRA";
        
        break;

     case 6:
        cout << "SEXTA FEIRA";
        
        break;

     case 7:
        cout << "SABADO";
        
        break;
    
    case 1:
        cout << "DOMINGO";
        
        break;
    
    default:
        cout << "VALOR INVÁLIDO";

        break;
    }

    return 0;

}
