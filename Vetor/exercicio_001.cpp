/*1. Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.*/

#include <iostream>

using namespace std;

int main(){

    int vetor[5];

    cout <<"Informe 5 numeros inteiro:" <<endl;

    for (int i = 0; i < 5; i++){
        
        cin >>vetor[i];
    }
    for (int i = 0; i < 5; i++){
        
        cout <<vetor[i] <<" ";
    }
    
    return 0;
}