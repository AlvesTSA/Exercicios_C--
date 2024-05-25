/*16. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.*/

#include <iostream>
using namespace std;

int divisores(int valor){

    float resto = 0;
    int count = 0;

    for (int i = 1; i <= valor; i++)
    {
        resto = valor % i;

        if (resto == 0)
        {
            count++;
        }
    }
    
    return count;
}

int main(){

    int count = 0;
    int valor = 0;

    cout <<"Informe um numero inteiro: ";
    cin >>valor;

    count = divisores(valor);

    cout <<"O valor informado e divisivel por "<<count <<" numeros.";

    return 0;
}