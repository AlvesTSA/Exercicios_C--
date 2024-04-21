/*4. Leia uma matriz 4 x 4 e troque os valores da 1ª.linha pelos da 4ª.coluna, vice-e-versa. Escrever ao final a matriz obtida*/

#include <iostream>
#include <random>
#include <ctime>
#define size 4
using namespace std;

int main(){

    srand(time(nullptr));
    int matriz[size][size];
    int temp = 0;

    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
        
            matriz[i][j] = rand() % 10;
        }
    }

    cout <<"Matriz lida: "<<endl;

    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
        
            cout <<matriz[i][j] <<" ";
        }
        cout <<"\n";
    }

    for (int i = 0; i < size; i++){
    
        temp = matriz[0][i];
        matriz[0][i] = matriz[i][3];
        matriz[i][3] = temp;
    }

    cout <<"Matriz invertida: "<<endl;

    for (int i = 0; i < size; i++){
    
        for (int j = 0; j < size; j++){
        
            cout <<matriz[i][j] <<" ";
        }
        cout <<"\n";
    }

    return 0;
}