/*Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58  */

#include <iostream>

using namespace std;

int main(){

    float altura = 0;
    float peso = 0;

    cout << "Informe sua altura: " <<endl;
    cin >> altura;

    peso = (72.7*altura) - 58;

    cout << "Peso ideal: " <<peso <<endl;

    return 0;
    
}