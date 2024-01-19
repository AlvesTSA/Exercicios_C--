/*7. Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a multiplicação e os números.*/

#include <iostream>

using namespace std;

int main(){

    int vetor[5];
    int soma = 0;
    int multiplicacao = 1;

    cout <<"Informe 5 numerosa inteiros: "<<endl;

    for (int i = 0; i < 5; i++){
        
        cin >>vetor[i];

        soma += vetor[i];
        multiplicacao *= vetor[i];
    }
    
    cout <<"\nSoma: "<<soma;
    cout <<"\nMultiplicacao: "<<multiplicacao;
    cout <<"\nNumeros: ";

    for (int i = 0; i < 5; i++){
        
        cout <<vetor[i] <<" ";
    }
    
    return 0;
}