/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
a)Para homens: (72.7*h) - 58
b)Para mulheres: (62.1*h) - 44.7           */

#include <iostream>

using namespace std;

int main(){

    float h = 0;
    float peso_homem = 0;
    float peso_mulher = 0;

    cout << "Informe sua altura: " ;
    cin >> h;

    peso_homem = (72.7*h) - 58;
    peso_mulher = (62.1*h) - 44.7;

    cout << "Peso ideal para homens" << peso_homem <<endl;
    cout << "Peso ideal para mulheres" <<peso_mulher <<endl;
    
    return 0;
    
}