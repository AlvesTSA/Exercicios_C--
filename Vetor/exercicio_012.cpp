/*12. Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses alunos.*/

#include <iostream>

using namespace std;

int main(){

    int idade[30];
    float altura[30];
    float media = 0;
    int count_aluno = 0;

    for (int i = 0; i < 30; i++){
        
        cout <<"Informe a idade do aluno "<<i + 1 <<": ";
        cin >>idade[i];
        cout <<"Informe a altura do aluno "<<i + 1 <<": ";
        cin >>altura[i];

        media += altura[i];
    }
    media = media / 30;

    for (int i = 0; i < 30; i++){
        
        if (idade[i] > 13 && altura[i] < media){
            
            count_aluno++;
        }
    }

    cout <<"Alunos com mais de 13 anos abaixo da altura media: "<<count_aluno <<endl;

    return 0;
}