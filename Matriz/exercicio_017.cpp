/*17. Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size 8
#define intervalo_rand 10

int main(){

    int matriz[size][size];
    srand(time(NULL));

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matriz[i][j] = rand() % intervalo_rand;
        }
    }

    int i,j = 0;

    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            if (j > i){
                
                matriz[i][j] = 0;
            }
            
            cout <<" "<<matriz[i][j];
        }
        cout <<"\n";
    }
    
    return 0;
}