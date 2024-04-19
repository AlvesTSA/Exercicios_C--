/*2. Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.*/

#include <iostream>
#include <random>
#include <ctime>
#define size 6
#define intervalo_rand 30
using namespace std;

int main(){

    srand(time(nullptr));
    int count = 0;
    int matriz[size][size];

    cout <<"Informe uma matriz: "<<endl;

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){
            
            matriz[i][j] = rand() % intervalo_rand;

            if (matriz[i][j] > 10){
                
                count++;
            } 
        }
    }

    cout <<"Matriz lida: "<<endl;
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){

            cout <<matriz[i][j] <<" ";
        } 
        cout <<"\n"; 
    }

    cout <<"Existem "<<count <<" valores maiores que 10"<<endl;
    
    return 0;
}
