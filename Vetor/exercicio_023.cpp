/*23. Faça um programa que simule um lançamento de dados. Lance o dado 100 vezes e armazene os resultados em um vetor . Depois, mostre quantas vezes cada valor foi conseguido. Dica: use um vetor de contadores(1-6) e uma função para gerar numeros aleatórios, simulando os lançamentos dos dados.*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
 
int main(){

    int contador[6] = {0};
    int num = 0;
    srand(time(nullptr));

    for (int i = 0; i < 100; i++){

        num = (rand() % 6) + 1;

        switch (num){
        case 1:
            contador[0]++;
            break;
        case 2:
            contador[1]++;
            break;
        case 3:
            contador[2]++;
            break;
        case 4:
            contador[3]++;
            break;
        case 5:
            contador[4]++;
            break;
        case 6:
            contador[5]++;
            break;
        
        default:
            cout <<"Valor invalido."<<endl;
            break;
        }
    }   
    for (int i = 0; i < 6; i++){
        
        cout <<"Numero "<<i + 1 <<": "<<contador[i] <<" vezes"<<endl;
    }
    
    return 0;
}