/*10. Faça um Programa que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos intercalados dos dois outros vetores.*/

#include <iostream>

using namespace std;

int main(){

    int vetor1[10];
    int vetor2[10];
    int vetor3[20];
    int i = 0;
    int y = 0;
    int z = 0;

    cout <<"Informe os elementos do vetor 1:\n";

    for (i = 0; i < 10; i++){
        
        scanf("%d", &vetor1[i]);
    }
    
    cout <<"Informe os elementos do vetor 2:\n";

    for (y = 0; y < 10; y++){
        
        scanf("%d", &vetor2[y]);
    }
    
    i = 0;

    for (z = 0; z < 20; z += 2){
        
        vetor3[z] = vetor1[i];
        i++;
    }
    
    y = 0;

    for (z = 1; z < 20; z += 2){
        
        vetor3[z] = vetor2[y];
        y++;
    }

    for (z = 0; z < 20; z++){
        
        cout <<vetor3[z] <<" ";
    }
    
    return 0;
}