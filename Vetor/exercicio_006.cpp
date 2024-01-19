/*6. Leia um vetor de 40 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.*/

#include <iostream>

using namespace std;

int main(){

    int vetor[40];

    cout <<"Informe 40 numeros inteiros: "<<endl;

    for (int i = 0; i < 40; i++){
        
        cin >>vetor[i];

        if (vetor[i] < 0){
            
            vetor[i] = 0;
        }
    }
    for (int i = 0; i < 40; i++){
        
        cout <<vetor[i] <<" ";
    }
    return 0;
}