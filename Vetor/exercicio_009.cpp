/*9. Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a soma dos quadrados dos elementos do vetor.*/

#include <iostream>

using namespace std;

int main(){

    int vetor[10];
    int soma = 0;

    cout <<"Informe 10 numeros inteiro:";

    for (int i = 0; i < 10; i++){
        
        scanf("%d", &vetor[i]);

        soma += (vetor[i] * vetor[i]);
    }
    
    cout <<"Soma dos quadrado dos elementos: "<<soma <<endl;

    return 0;
}