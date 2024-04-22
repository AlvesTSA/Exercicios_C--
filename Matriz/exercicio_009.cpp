/*9. Leia uma matriz 6 x 6 e atribuir o valor 0 para os valores negativos encontrados fora das diagonais principal e secundaria.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size 6
#define intervalo_rand 10

int main(){

    srand(time(NULL));
    int matriz[size][size];

    cout<< "Informe uma matriz " <<size <<" x " <<size <<": ";
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            int num = rand() % intervalo_rand;
            matriz[i][j] = num * -1;
        }  
    }

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            if (i != j && j != size - i - 1 && matriz[i][j] < 0){
                
                matriz[i][j] = 0;
            }  
        }  
    }

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            cout<<" "<<matriz[i][j];
        } 
        cout<<"\n"; 
    }
    
    return 0;
}