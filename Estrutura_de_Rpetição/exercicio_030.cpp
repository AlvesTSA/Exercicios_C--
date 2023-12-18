/*30. O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da tabelinha, que já é um sucesso na sua loja de 1,99. Você foi contratado para desenvolver o programa que monta a tabela de preços de pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário, conforme o exemplo abaixo:

Preço do pão: R$ 0.18 

Panificadora Pão de Ontem - Tabela de preços 

1 - R$ 0.18

2 - R$ 0.36

...

50 - R$ 9.00

*/
#include <iostream>

using namespace std;

int main(){

    float soma = 0;
    int i = 0;
    float preco_pao = 0;

    cout <<"Informe o preco da unidade de pao: ";
    cin >>preco_pao;
    cout <<"Panificadora Pao de Ontem - Tabela de precos"<<endl;

    for (i = 1; i <= 50; i++){
        
        soma += preco_pao;

        cout <<i <<" - R$ "<<soma <<endl;
    }
    return 0;
}