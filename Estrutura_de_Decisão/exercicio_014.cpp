/* Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
 
Média de aproveitamento: entre 9.0 e 10.0; Conceito: A 
 
Média de aproveitamento: entre 7.5 e 9.0; Conceito: B 

Média de aproveitamento: entre 6.0 e 7.5; Conceito: C 
 
Média de aproveitamento: entre 4.0 e 6.0; Conceito: D  

Média de aproveitamento: entre 4.0 e 0.0; Conceito: E 

O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
*/

#include <iostream>
using namespace std;

int main(){

    float nota1 = 0;
    float nota2 = 0;
    float media = 0;

    cout << "Informe suas duas notas: " << endl;
    cin >> nota1 >> nota2;

    media = (nota1 + nota2)/2;

    if (media >= 9 && media <= 10){

        cout << "Nota 1: " << nota1 << endl; 
        cout << "Nota 2: " << nota2 << endl;
        cout << "Média: " << media << endl; 
        cout << "Conceito: A" << endl;
        cout << "Situação: APROVADO" << endl;
        
    }
    else if (media >= 7.5 && media < 9){

        cout << "Nota 1: " << nota1 << endl; 
        cout << "Nota 2: " << nota2 << endl;
        cout << "Média: " << media << endl; 
        cout << "Conceito: B" << endl;
        cout << "Situação: APROVADO" << endl;
        
    }
    else if (media >= 6 && media < 7.5){

        cout << "Nota 1: " << nota1 << endl; 
        cout << "Nota 2: " << nota2 << endl;
        cout << "Média: " << media << endl; 
        cout << "Conceito: C" << endl;
        cout << "Situação: APROVADO" << endl;
        
    }
    else if (media >= 4 && media < 6){

        cout << "Nota 1: " << nota1 << endl; 
        cout << "Nota 2: " << nota2 << endl;
        cout << "Média: " << media << endl; 
        cout << "Conceito: D" << endl;
        cout << "Situação: REPROVADO" << endl;
        
    }
    else if (media >= 0 && media < 4){
        
        cout << "Nota 1: " << nota1 << endl; 
        cout << "Nota 2: " << nota2 << endl;
        cout << "Média: " << media << endl; 
        cout << "Conceito: C" << endl;
        cout << "Situação: REPROVADO" << endl;

    }
    else{

        cout << "Informe um valor válido !" << endl;
        
    }
    
    return 0;

}