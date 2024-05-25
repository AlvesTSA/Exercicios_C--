/*13. Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/

#include <iostream>
using namespace std;

int calcFatorial(int *numero){

    *numero = 0;
    int fatorial = 1;

    do
    {
        cin >>*numero;

        if (*numero < 0)
        {
            cout <<"ERRO: o numero informado deve ser maior ou igual a zero.\n";
        }
        
    } while (*numero < 0);
    
    for (int i = 2; i <= *numero; i++)
    {
        fatorial *= i;
    }
    
    return fatorial;
}

int main(){

    int num = 0;
    int fatorial = 0;

    cout <<"Informe um numero inteiro e positivo: ";

    fatorial = calcFatorial(&num);

    cout <<num<< "! = " <<fatorial;

    return 0;
}