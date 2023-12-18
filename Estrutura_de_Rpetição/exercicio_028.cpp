/*28. Faça um programa que calcule o valor total investido por um colecionador em sua coleção de CDs e o valor médio gasto em cada um deles. O usuário deverá informar a quantidade de CDs e o valor para em cada um.*/

#include <iostream>

using namespace std;

int main(){

    float valor_cd = 0;
    int quant_cd = 0;
    float soma = 0;
    float media = 0;

    cout <<"Informe a quantidade de CDs: ";
    cin >>quant_cd;

    for (int i = 1; i <= quant_cd; i++){
        
        cout <<"Informe o valor do CD: "<<i <<endl;
        cin >>valor_cd;

        soma += valor_cd;
    }
    
    media = soma/quant_cd;

    cout <<"Valor total gasto R$: "<<soma <<endl;
    cout <<"Valor medio gasto R$: "<<media <<endl;

    return 0;

}