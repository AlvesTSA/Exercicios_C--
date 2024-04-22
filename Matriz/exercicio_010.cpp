/*10. Leia uma matriz 50 x 2, onde cada coluna corresponde a um lado de um triangulo retângulo. Declare um vetor que contenha a área dos respectivos triângulos e o escreva.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
#define size_l 50
#define size_c 2
#define intervalo_rand 10

int main(){

    int matriz[size_l][size_c];
    float vetor[size_l];
    srand(time(NULL));
    const float C = 0.5;

    cout<< "Informe uma matriz " <<size_l <<" x " <<size_c <<": "<<endl;
    for (int i = 0; i < size_l; i++){
        
        for (int j = 0; j < size_c; j++){
            
            int num = rand() % intervalo_rand;
            matriz[i][j] = num + 1;
        }
    }

    cout<<"Matriz lida: \n";
    
    for (int i = 0; i < size_l; i++){
        
        for (int j = 0; j < size_c; j++){
            
            cout<<" "<<matriz[i][j];
        }
        cout<<"\n";
    }

    cout<<"Areas dos triangulos: \n";

    for (int i = 0; i < size_l; i++){
         
        vetor[i] = (float)matriz[i][0] * (float)matriz[i][1] * C;
        
        cout<<" "<<vetor[i];
    }

    return 0;  
}