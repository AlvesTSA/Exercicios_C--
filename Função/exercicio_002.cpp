
/*2. Faça um programa com uma função chamada somaImposto. A função possui dois parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas expressa em porcentagem e custo, que é o custo de um item antes do imposto. A função “altera” o valor de custo para incluir o imposto sobre vendas.*/

#include <iostream>
using namespace std;

float somaImposto(float taxaImposto,float custo){

    float custo_final = custo + (custo*(taxaImposto / 100));

    return custo_final;
}

int main(){

    float taxaImposto = 0;
    float custo = 0;
    
    cout <<"Informe o a taxa de imposto: ";
    cin >>taxaImposto;
    cout <<"Informe o custo do preoduto: ";
    cin >>custo;

    float custo_final = somaImposto(taxaImposto,custo);

    cout <<"Valor do produto com imposto: "<<custo_final;

    return 0;
}
