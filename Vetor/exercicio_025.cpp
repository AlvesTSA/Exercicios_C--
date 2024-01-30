/*25. Considere um vetor de trajetórias de 9 elementos, onde cada elemento possui o valor do próximo elemento do vetor a ser lido.

Índice       1    2    3    4    5    6    7     8     9                      
Valor       5    7    6    9     2   8    4     0     3            
Assim, a seqüência da leitura seria 1, 5, 2, 7, 4, 9, 3, 6, 8, 0
Faça um algoritmo que seja capaz de ler esse vetor e seguir a trajetória.*/

#include <iostream>

using namespace std;

int main(){

    int indice = 1;
    int vetor[9] = {5,7,6,9,2,8,4,0,3};

    cout <<"Caminho: ";
    cout <<indice <<" ";

    for (int i = 0; i < 9; i++){

        cout <<vetor[indice - 1] <<" ";
        indice = vetor[indice - 1];
        
    }
    
    return 0;
}