/*27. Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.*/

#include <iostream>

using namespace std;

int main(){

    int turmas = 0;
    int alunos = 0;
    int i = 0;
    int soma = 0;
    int media = 0;

    cout <<"Informe a quantidade de turmas: ";
    cin >>turmas;

    for (i = 1; i <= turmas; i++){
        
        do{
            cout <<"Informe a quantidade de alunos da turma "<<i <<": ";
            cin >>alunos;

            if (alunos > 40){
                cout <<"erro: as turmas não podem ultrapassar 40 alunos."<< endl;
            }
            
        } while (alunos > 40);
        
        soma += alunos; 
    }
    
    media = (float)soma/turmas;

    cout <<"Quantidade media de alunos por turma: "<<media;

    return 0;
}