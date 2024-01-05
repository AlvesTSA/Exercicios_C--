/*39. Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo representando a sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e o número do aluno mais baixo, junto com suas alturas.*/

#include <iostream>
using namespace std;

int main(){

    int altura = 0;
    int num_aluno = 0;
    int maior_altura = 0;
    int menor_altura = 999;
    int cod_maior_altura = 0;
    int cod_menor_altura = 0;

    for(int i = 1; i <= 10; i++){
        
        cout <<"\nInforme seu numero: ";
        cin >>num_aluno;

        cout <<"Informe sua altura: ";
        cin >>altura;

        if (altura > maior_altura){

            maior_altura = altura;
            cod_maior_altura = num_aluno;
        }
        else if(altura < menor_altura){
           
            menor_altura = altura;
            cod_menor_altura = num_aluno;
        }
        
    }

    cout <<"\nAluno numero " <<cod_maior_altura <<" o mais alto: " <<maior_altura  <<" cm";
    cout <<"\nAluno numero " <<cod_menor_altura <<" o mais baixo: " <<menor_altura  <<" cm";
   
    return 0;
}