/*1. Leia uma matriz 3 x 3 e escreva a localização (linha e a coluna) do maior valor.*/

#include <iostream>
#define size 3
using namespace std;

int main(){

    int matriz[size][size];
    int maior = 0;

    cout <<"Informe uma matriz "<<size <<" x " <<size <<": "<<endl;
    
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){

            cin >>matriz[i][j];
        }  
    }

    maior = matriz[0][0];
    int linha = 0;
    int coluna = 0;

    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size; j++){

            if (matriz[i][j] > maior){
                
                maior = matriz[i][j];
                linha = i + 1;
                coluna = j + 1;
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

    cout <<"Maior valor da matriz: "<<maior <<endl;
    cout <<"Linha: "<<linha <<"\ncoluna: "<<coluna <<endl;

    return 0;
}