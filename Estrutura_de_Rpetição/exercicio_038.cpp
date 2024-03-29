/*38. Um funcionário de uma empresa recebe aumento salarial anualmente: Sabe-se que:

Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00; 

Em 1996 recebeu aumento de 1,5% sobre seu salário inicial; 

A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao dobro do percentual do ano anterior. Faça um programa que determine o salário atual desse funcionário. Após concluir isto, altere o programa permitindo que o usuário digite o salário inicial do funcionário.
*/

#include <iostream>
using namespace std;

int main(){

    double salario = 0;
    double perc_aumento = 0.015;

    cout <<"Informe seu salario inicial: ";
    cin >>salario;

    for (int i = 1996; i <= 2023; i++){
        
        salario = salario * (1 + perc_aumento);
        perc_aumento *= 2;
    }
    cout <<"Salario atual: R$ " <<salario;

    return 0;
} 