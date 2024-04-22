/*6. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/

#include <iostream>
#define size 5
using namespace std;

int main(){

    int matriz[size][size];

    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            if(i == y){

                matriz[i][y] = 1;
            }
            else{

                matriz[i][y] = 0;
            }
        }
    }

    cout <<"Matriz resultante:\n";
    
    for (int i = 0; i < size; i++){
        
        for (int y = 0; y < size; y++){
            
            cout <<" "<<matriz[i][y];
        }

        cout <<"\n";
    }

    return 0;
}