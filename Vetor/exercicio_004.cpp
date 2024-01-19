/*4. Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.*/

#include <iostream>

using namespace std;

int main(){

    char vetor[10];
    int contador = 0;

    cout <<"Informe 10 caracteres(letras):"<<endl;

    for (int i = 0; i < 10; i++){
        
        cin >>vetor[i];

        if (vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u' && vetor[i] != 'A' && vetor[i] != 'E' && vetor[i] != 'I' && vetor[i] != 'O' && vetor[i] != 'U'){

            contador++;
        }
    }

    cout <<"Total de consoantes: "<<contador<<endl;

    for (int i = 0; i < 10; i++){
        
        if (vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u' && vetor[i] != 'A' && vetor[i] != 'E' && vetor[i] != 'I' && vetor[i] != 'O' && vetor[i] != 'U'){

            cout <<vetor[i] <<" "; 
        } 
    }

    return 0;
}