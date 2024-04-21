/*5. Leia duas matrizes 20 x 20 e escreva os valores da primeira que ocorrem em qualquer posição da segunda.*/

#include <iostream>
#include <random>
#include <ctime>
#define size 20
#define intervalo_rand 1000
using namespace std;

int main(){

    int matrizA[size][size];
    int matrizB[size][size];
    srand(time(nullptr));

    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
        
            matrizA[i][j] = rand() % intervalo_rand;
            matrizB[i][j] = rand() % intervalo_rand;
        } 
    }
    
    cout <<"Todos os valores da matriz A que estao na matriz B\n" <<endl;

    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
        
            for (int w = 0; w < size; w++){
    
                for (int z = 0; z < size; z++){
                
                    if (matrizA[i][j] == matrizB[w][z]){
                            
                        cout <<matrizA[i][j] <<" ";
                    }
                    
                } 
            }
        } 
    }
    
    return 0;
}