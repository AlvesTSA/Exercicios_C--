/*33. O Departamento Estadual de Meteorologia lhe contratou para desenvolver um programa que leia as um conjunto indeterminado de temperaturas, e informe ao final a menor e a maior temperaturas informadas, bem como a média das temperaturas.*/

#include <iostream>

using namespace std;

int main(){

    int t = 0;
    int soma = 0;
    float media = 0;
    int maior = 0;
    int menor = 0;
    int op = 0;
    int i = 1;

    cout <<"Informe a temperatura 1: ";
    cin >>t;
    maior = t;
    menor = t;
    soma = t;
    do{
        i++;
        cout <<"Informe a temperatura "<<i <<": ";
        cin >>t;
        soma += t;
        if (t > maior){
            maior = t;
        }
        else if(t < menor){
            menor = t;
        }

        cout <<"Deseja adicionar mais uma temperatura ? [0]-Nao [1]-Sim: ";
        cin >>op;
        
    } while (op == 1);
    
    media = (float)soma/i;

    cout <<"Maior temperatura: " <<maior;
    cout <<"\nMenor temperatura: "<<menor;
    cout <<"\nTemperatura media: " <<media;

    return 0;
}