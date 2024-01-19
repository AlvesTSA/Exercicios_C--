/*2. Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem inversa.*/

#include <iostream>

using namespace std;

int main(){

    int vetor[10];

    cout <<"Informe 10 numeros:" <<endl;

    for (int i = 0; i < 10; i++){
        
        cin >>vetor[i];
    }
    for (int i = 9; i >= 0; i--){
        
        cout <<vetor[i] <<" ";

    }
    
    return 0;
}