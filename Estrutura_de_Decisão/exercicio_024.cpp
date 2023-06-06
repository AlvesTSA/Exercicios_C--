/*Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.

Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;
 
Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/

#include <iostream>
using namespace std;

int main(){

    int valor_saque = 0;
    int nota_100 = 0;
    int nota_50 = 0;
    int nota_10 = 0;
    int nota_5 = 0;
    int nota_1 = 0;

    cout << "informe o valor do saque: " << endl;
    cin >> valor_saque;

    if(valor_saque > 0 && valor_saque <= 600){

        nota_100 = valor_saque/100;
        valor_saque %= 100;
        nota_50 = valor_saque/50;
        valor_saque %= 50;
        nota_10 = valor_saque/10;
        valor_saque %= 10;
        nota_5 = valor_saque/5;
        valor_saque %= 5;
        nota_1 = valor_saque;
    }
    else{

        cout << "Informe um valor válido" << endl;

        return 0;
    }

    cout << "Nota de 100 reais: " << nota_100 << "\nNota de 50 reais: " << nota_50 << "\nNota de 10 reais: " << nota_10 << "\nNota de 5 reais: " << nota_5 << "\nNota de 1 real: " << nota_1 << endl;

    return 0;
}