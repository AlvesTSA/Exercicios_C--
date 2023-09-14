/*14. Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int resto = 0;
    int i = 0;
    int impar = 0;
    int par = 0;

    cout <<"Informe 10 numeros inteiros: "<<endl;
   
    for (i = 0; i < 10; i++){
        
        cin >>num;
        resto = num % 2;

        if (resto != 0){
            
            impar++;
        }
        else{

            par++;
        }
        
    }

    cout <<"Quantidade de numeros Par: "<<par <<"\nQuantidade de numero impar: "<<impar;

    return 0;
    
}