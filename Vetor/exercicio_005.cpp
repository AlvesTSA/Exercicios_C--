/*5. Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os números pares no vetor PAR e os números IMPARES no vetor impar. Imprima os três vetores.*/

#include <iostream>

using namespace std;

int main(){

    int num[20];
    int count_impar = 0;
    int count_par = 0;
    int resto = 0;
    int z = 0;
    int y = 0;
    
    cout <<"Informe 20 numeros inteiros:"<<endl;

    for (int i = 0; i < 20; i++){
        
        cin >>num[i];
        resto = num[i] % 2;

        if (resto == 0){
            
            count_par++;
        }
        else{
            
            count_impar++;
        }
    }

    int par[count_impar];
    int impar[count_par];

    cout <<"\nNumeros: ";

    for (int i = 0; i < 20; i++){
        
        cout <<num[i] <<" ";

        resto = num[i] % 2;

        if (resto == 0){
            
            par[y] = num[i];
            y++;
        }
        else{
            
            impar[z] = num[i];
            z++;
        }

    }
    
    cout <<"\nNumeros impares: ";

    for (int i = 0; i < count_impar; i++){
        
        cout <<impar[i] <<" ";
    }

    cout <<"\nNumeros pares: "; 

    for (int i = 0; i < count_par; i++){
        
        cout <<par[i] <<" ";
    }

    return 0;
}