/*18. . Faça um programa que, dado um conjunto de N números, determine o menor valor, o maior valor e a soma dos valores.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int maior = 0;
    int menor = 0;
    int n = 0;
    int i = 0;
    int soma = 0;

    cout <<"Informe a quantidade de numeros que fazem parte do conjunto: ";
    cin >>n;
    cout <<"Informe o cnjunto de numero:"<<endl;
    cin >>num;

    maior = num;
    menor = num;
    soma += num;

    for (i = 1; i < n; i++){
        
        cin >>num;
        soma += num;

        if (num > maior){
            
            maior = num;
        }
        else if (num < menor){
            
            menor = num;
        }

    }
    cout <<"Maior = "<<maior <<"\nMenor = "<<menor <<"\nSoma = "<<soma;

    return 0; 

}