/*16. Utilize uma lista para resolver o problema a seguir. Uma empresa paga seus vendedores com base em comissões. O vendedor recebe $200 por semana mais 9 por cento de suas vendas brutas daquela semana. Por exemplo, um vendedor que teve vendas brutas de $3000 em uma semana recebe $200 mais 9 por cento de $3000, ou seja, um total de $470. Escreva um programa (usando um array de contadores) que determine quantos vendedores receberam salários nos seguintes intervalos de valores:

 a. $200 - $299 

 b. $300 - $399 

 c. $400 - $499

 d. $500 - $599

 e. $600 - $699
 
 f. $700 - $799
 
 g. $800 - $899

 h. $900 - $999

 i. $1000 em diante

Desafio: Crie ma fórmula para chegar na posição da lista a partir do salário, sem fazer vários ifs aninhados.*/

#include <iostream>

using namespace std;

int main(){

    float salario_fixo = 200;
    float salario_extra = 0;
    float salario_bruto = 0;
    float valor_vendas = 0;
    float percentual = 0.09;
    int quant_vendedor = 30;
    int posicao = 0;
    int contador[9] = {0};

    cout <<"Informe a venda bruda de cada vendedor e digite -1 para finalizar."<<endl;

    for (int i = 0; i < quant_vendedor; i++){
        
        cout <<"Informe o valor das vendas do vendedor "<< i + 1 <<": ";
        cin >>valor_vendas;

        if (valor_vendas == -1){
            break;
        }

        salario_extra = valor_vendas * percentual;
        salario_bruto = salario_extra + salario_fixo;
        posicao = (salario_bruto - salario_fixo)/100;

        if (posicao > 8){
            
            posicao = 8;
        }
        
        contador[posicao]++;
    }
    
    cout <<"Quantidade de vendedores quereceberam  de $200 - $299 :" <<contador[0] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $300 - $399 :" <<contador[1] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $400 - $499 :" <<contador[2] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $500 - $599 :" <<contador[3] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $600 - $699 :" <<contador[4] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $700 - $799 :" <<contador[5] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $800 - $899 :" <<contador[6] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $900 - $999 :" <<contador[7] <<endl;
    cout <<"Quantidade de vendedores quereceberam  de $1000 em diante :" <<contador[8] <<endl;

    return 0;
}