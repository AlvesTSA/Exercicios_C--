/* 16- Criando um tabuleiro de Jogo da Velha
Crie um tabuleiro de jogo da velha, usando uma matrizes de caracteres (char) 3×3, onde o usuário pede o número da linha (1 até 3) e o da coluna (1 até 3). A cada vez que o usuário entrar com esses dados, colocar um ‘X’ ou ‘O’ no local selecionado.*/

#include <iostream>
using namespace std;
#define size 3

int main(){

    char matriz[size][size];
    int i,j = 0;

    for (int z = 0; z < size*size; z++){
        
        do{
            cout <<"Informe a linha: ";
            cin >>i;
            cout <<"Informe a coluna: ";
            cin >>j;

            if ((i < 1 || i > size) || (j < 1 || j > size)){
                
                cout <<"ERRO: Valor invalido, informe de 1 a "<<size <<endl;
            }
            if (matriz[i-1][j-1] == 'X' || matriz[i-1][j-1] == 'O'){
                
                cout <<"ERRO: Esse espaco ja foi preenchido.\n";
            }
        
        } while ((i < 1 || i > size) || (j < 1 || j > size) || matriz[i-1][j-1] == 'X' || matriz[i-1][j-1] == 'O');

        if (z % 2 == 0){

            matriz[i-1][j-1] = 'X';
        }
        else{

            matriz[i-1][j-1] = 'O';
        }
    }

    cout <<"Resultado do jogo:\n";
    for (i = 0; i < size; i++){
        
        for (j = 0; j < size; j++){
            
            cout <<" "<<matriz[i][j];
        }
        cout <<"\n";
    }
    
    return 0;
}
