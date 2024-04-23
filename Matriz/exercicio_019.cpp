
/*19. Leia duas matrizes 10 x 10 e faça uma substituição entre a diagonal inferior da primeira coma diagonal superior da segunda.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size 10
#define intervalo_rand 10

int main(){

    int matrizA[size][size];
    int matrizB[size][size];
    srand(time(NULL));

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matrizA[i][j] = rand() % intervalo_rand;
            matrizB[i][j] = rand() % intervalo_rand;
        }
    }

    cout <<"Matrizes originais:\n";
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            cout <<" "<<matrizA[i][j];
        }
        cout <<"\n";
    }

    cout <<"\n";

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            cout <<" "<<matrizB[i][j];
        }
        cout <<"\n";
    }

    int i,j = 0;
    int temp = 0;
    
    for (i = 0; i < size; i++){
        
        for (j = i + 1; j < size; j++){
            
            temp = matrizA[j][i];
            matrizA[j][i] = matrizB[i][j];
            matrizB[i][j] = temp;
        }
    }

    cout <<"Matrizes invertidas:\n";
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            cout <<" "<<matrizA[i][j];
        }
        cout <<"\n";
    }

    cout <<"\n";

    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            cout <<" "<<matrizB[i][j];
        }
        cout <<"\n";
    }
    return 0;
}
