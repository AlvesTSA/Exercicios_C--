/*1. Faça um programa, com uma função que necessite de um argumento. A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, se seu argumento for zero ou negativo.*/

#include <iostream>
using namespace std;

char verifica_num(int num)
{
    if (num > 0)
    {
        return 'P';
    }
    else
    {
        return 'N';
    }
}

int main(){

    int num = 0;
    char resultado;
    
    cout <<"Informe um valor inteiro: ";
    cin >>num;

    resultado = verifica_num(num);

    cout <<"Resultado: "<<resultado;

    return 0;
}


