/*8. Leia uma matriz 8x 8 e escreva o maior elemento da diagonal principal e a soma dos elementos da diagonal secundaria.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size 8
#define intervalo_rand 100


int main(){

    srand(time(NULL));
    int matriz[size][size];
    int maior = 0;

    cout<< "Informe uma matriz " <<size <<" x " <<size <<": ";

    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            matriz[i][y] = rand() % intervalo_rand;
        }
    }

    //maior valor da diagonal principal
    maior = matriz[0][0];

    for (int i = 0; i < size; i++){
        
        if (matriz[i][i] > maior){
            
            maior = matriz[i][i];
        }
    }
    
    //soma da diagonal secundária
    int soma = 0;
    int j = size - 1;

    for (int i = 0; i < size; i++){
        
        soma += matriz[i][j];
        j--;
    }
    
    cout<<"\nMatriz lida:\n";

    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            cout<<" "<<matriz[i][y];
        }
        cout<<"\n";
    }

    cout<<"Diagonal principal: ";

    for (int i = 0; i < size; i++){
        
        cout<<" "<<matriz[i][i];
    }
    cout<<"\nMaior valor da diagonal principal: "<<maior;
    
    cout<<"\nDiagonal secundaria: ";

    j = size - 1;
    for (int i = 0; i < size; i++){
        
        cout<<" "<<matriz[i][j];
        j--;
    }

    cout<<"\nSoma da diagonal secundaria: "<<soma;

    return 0;
}