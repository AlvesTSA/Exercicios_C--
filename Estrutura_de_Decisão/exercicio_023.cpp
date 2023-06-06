/* Um posto está vendendo combustíveis com a seguinte tabela de descontos:

Álcool:
 
Até 20 litros: desconto de 3% por litro;
 
Acima de 20 litros: Desconto de 5% por litro.

Gasolina:

Até 20 litros: desconto de 4% por litro

Acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool. G-gasolina), calcule e imprima o valor a ser pago pelo cliente.*/

#include <iostream>

using namespace std;

int main(){

    float valor_litro = 0;
    float litro = 0;
    char combustivel = 0;
    float desconto = 0;
    float desconto_litro = 0;
    float valor = 0;

    cout << "Informe quantos litros deseja: " << endl;
    cin >> litro;
    cout << "Informe qual combustível deseja\nA-álcool\nG-gasolina" << endl;
    cin >> combustivel;

    switch (combustivel){

    case 'A': 

        if(litro > 0 && litro <= 20){
            
            valor_litro = 4;
            desconto_litro = valor_litro*0.03;
            valor_litro = valor_litro - desconto_litro;
            valor = litro*valor_litro;

        }
        else{

            valor_litro = 4;
            desconto_litro = valor_litro*0.05;
            valor_litro = valor_litro - desconto_litro;
            valor = litro*valor_litro;
        }
        break;
    
    case 'G': 

        if(litro > 0 && litro <= 20){
            
            valor_litro = 5;
            desconto_litro = valor_litro*0.04;
            valor_litro = valor_litro - desconto_litro;
            valor = litro*valor_litro;

        }
        else{

            valor_litro = 5;
            desconto_litro = valor_litro*0.06;
            valor_litro = valor_litro - desconto_litro;
            valor = litro*valor_litro;
            
        }
        break;
    default:

            cout << "Informe uma opção válida";

            return 0;

        break;
    }

    cout << "Valor a ser pago R$: " << valor << endl;

    return 0;
    
}