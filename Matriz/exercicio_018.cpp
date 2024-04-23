/*18. Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior. Escreva-a ao final.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size 5
#define intervalo_rand 10

int main(){

    int matriz[size][size];
    srand(time(NULL));

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matriz[i][j] = rand() % intervalo_rand;
        }
    }

    cout <<"Matriz original:\n";
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            cout <<" "<<matriz[i][j];
        }
        cout <<"\n";
    }
    cout <<"\n";
    int i,j = 0;
    int temp = 0;
    
    for (i = 0; i < size; i++){
        
        for (j = i + 1; j < size; j++){
            
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }

    cout <<"Matriz invertida:\n";
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            cout <<" "<<matriz[i][j];
        }
        cout <<"\n";
    }
    return 0;
}
