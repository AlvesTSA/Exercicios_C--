/*17. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.*/

#include <iostream>
using namespace std;

int somatorio(int n){

    int soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    
    return soma;
}

int main(){

    int soma = 0;
    int n = 0;

    cout <<"Informe um valor inteiro: ";
    cin >>n;

    if (n <= 0) 
    {
        cout <<"Erro: o número deve ser inteiro e positivo.\n";
        return 1;
    }

    soma = somatorio(n);

    cout <<"Somatorio de "<<n <<": " <<soma;

    return 0;
}