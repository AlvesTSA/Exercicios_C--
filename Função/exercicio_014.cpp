/*14. Faça um procedimento que lê 50 valores inteiros e retorna o maior e o menor deles.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
using namespace std;

void maior_menor(int *maior,int *menor){

    srand(time(NULL));
    int valores = 0;
    *maior = INT_MIN;// Inicializa o maior com o menor valor possível de um inteiro (#include <limits.h>)
    *menor = INT_MAX;// Inicializa o menor com o maior valor possível de um inteiro (#include <limits.h>)

    for (int i = 0; i < 50; i++){
        
        valores = rand() % 10000; //usado para gerar numeros aleatórios e simular entrada do usuário.
        //cin >>valores; 
        

        if (valores > *maior)
        {
            *maior = valores;
            
        }
        if (valores < *menor)
        {
            *menor = valores;
        } 
    }
}

int main(){

    int maior,menor = 0;

    cout <<"informe 50 valores inteiros: \n";

    maior_menor(&maior,&menor);

    cout <<"Maior: "<<maior <<"\nMenor: "<<menor;

    return  0;
}