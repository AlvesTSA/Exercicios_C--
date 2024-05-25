/*7. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar um valor booleano.*/

#include <iostream>
#include <stdbool.h>
using namespace std;

bool positivo_negativo(int numero)
{
   return numero > 0;  
}

int main(){

    int num = 0;
    
   cout <<"Informe um valor inteiro: ";
    cin >>num;

    if (positivo_negativo(num))
    {
       cout <<"O valor informado e positivo.";
    }
    else
    {
       cout <<"O valor informado e negativo.";
    }
    
    return 0;
}