/*18. Faça um programa para imprimir:

1
2   2
3   3   3
.....
n   n   n   n   n   n  ... n
para um n informado pelo usuário. Use uma função que receba um valor n inteiro e imprima até a n-ésima linha.*/

//n - (n - i) = n - n + i

#include <iostream>
using namespace std;

void imprimir(int n){

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout <<" "<<i;
        }
        cout <<"\n";
    }      
}

int main(){

    int n = 0;

    cout <<"informe um valor inteiro e positivo: ";
    cin >>n;

    if (n <= 0)
    {
        cout <<"ERRO: o valor deve ser maior que zero.\n";

        return 1;
    }

    imprimir(n);

    return 0; 
}