/*7. Leia duas matrizes 4 x 4 e escreva uma terceira com os 4 maiores elementos entre as primeiras*/

#include <iostream>
#include <random>
#include <ctime>
#define size 4
#define intervalo_rand 100
using namespace std;

int main() {
    int matrizA[size][size];
    int matrizB[size][size];
    int maiores[size*size + size*size]; // Vamos armazenar os maiores valores de ambas as matrizes aqui
    int k = 0; // Índice para percorrer o array de maiores valores
    int matrizResultante[size][size]; // Matriz para armazenar os 4 maiores valores
    srand(time(nullptr));

    cout <<"Informe os elementos da matriz A:\n";

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizA[i][j] = rand() % intervalo_rand;
            maiores[k++] = matrizA[i][j];
            cout <<" "<<matrizA[i][j];
        }
        cout<<endl;
    }

    cout <<"Informe os elementos da matriz B:\n";

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizB[i][j] = rand() % intervalo_rand;
            maiores[k++] = matrizB[i][j];
            cout <<" "<<matrizB[i][j];
        }
        cout<<endl;
    }

    // Ordenar os maiores valores em ordem decrescente
    for (int i = 0; i < (size*size + size*size) - 1; i++) {
        for (int j = i + 1; j < (size*size + size*size); j++) {
            if (maiores[i] < maiores[j]) {
                int temp = maiores[i];
                maiores[i] = maiores[j];
                maiores[j] = temp;
            }
        }
    }

    cout <<"Matriz resultante:\n";
    // Preencher a matriz resultante com os 4 maiores valores
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrizResultante[i][j] = maiores[j];
            cout <<" " <<matrizResultante[i][j];
        }
        cout <<"\n";
    }

    return 0;
}