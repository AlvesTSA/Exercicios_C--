/*11. Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.*/

#include <iostream>

using namespace std;;

int main(){

    int vetor1[10];
    int vetor2[10];
    int vetor3[10];
    int vetor4[30];
    int i = 0;
    int y = 0;
    int z = 0;
    int w = 0;
    
    cout <<"Informe os elementos do vetor 1:\n";

    for (i = 0; i < 10; i++){
        
        scanf("%d", &vetor1[i]);
    }
    
    cout <<"Informe os elementos do vetor 2:\n";

    for (y = 0; y < 10; y++){
        
        scanf("%d", &vetor2[y]);
    }

    cout <<"Informe os elementos do vetor 3:\n";

    for (z = 0; z < 10; z++){
        
        scanf("%d", &vetor3[z]);
    }
    
    i = 0;

    for (w = 0; w < 30; w += 3){
        
        vetor4[w] = vetor1[i];
        i++;
    }
    
    y = 0;

    for (w = 1; w < 30; w += 3){
        
        vetor4[w] = vetor2[y];
        y++;
    }

    z = 0;

    for (w = 2; w < 30; w += 3){
        
        vetor4[w] = vetor3[z];
        z++;
    }

    for (w = 0; w < 30; w++){
        
        cout <<vetor4[w] <<" ";
    }
    
    return 0;
}