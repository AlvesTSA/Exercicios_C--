/*8. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano*/

#include <iostream>
#include <stdbool.h>
using namespace std;

bool impar_par(int numero){

    return numero % 2 == 0;
}

int main(){

    int num = 0;

    cout <<"Informe um numero inteiro: ";
    cin >>num;

    if (impar_par(num))
    {
        cout <<"O numero informado e PAR";
    }
    else
    {
        cout <<"O numero informado e IMPAR";
    }
    
    return 0;
}