/*24. Faça um programa que calcule o mostre a média aritmética de N notas.*/

#include <iostream>

using namespace std;

int main(){

    int n = 0;
    float nota = 0;
    float soma = 0;
    float media = 0;

    cout <<"Informe quantas notas deseja calcular: ";
    cin >>n;

    for (int i = 1; i <= n; i++){
        
        cout <<"Informe a "<< i <<"º nota: ";
        cin >>nota;

        soma += nota;
    }
    media = (float)soma/n;

    cout <<"Nota media: " <<media;

    return 0;
}