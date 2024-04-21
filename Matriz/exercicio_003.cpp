/*3. Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.*/

#include <iostream>
#include <ctime>
#include <random>
#define size 20
#define intervalo_rand 1000
using namespace std;

int main(){

    srand(time(nullptr));
    int matriz[size][size];
    int x = 0;
    int i,j = 0;
    int loc[2];
    int count = 0;

    cout <<"Informe um valor inteiro de 0 a 100: ";
    cin >>x;

    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
               
            matriz[i][j] = rand() % intervalo_rand; 
        }
    }

    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
        
            if (matriz[i][j] == x){
                
                loc[0] = i;
                loc[1] = j;

                cout <<"Valor encontrado\nlinha: "<<loc[0] <<"\nColuna: "<<loc[1] <<endl;
                count++;
            } 
        }
    }

    if (count == 0){
        
        cout <<"Valor nao encontrado"<<endl;
    }
    
    return 0;
}