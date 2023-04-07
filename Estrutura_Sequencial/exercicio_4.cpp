//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <iostream>
using namespace std;

int main(){
    
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    float nota4 = 0;
    float media = 0;
    
    cout << "Informe a nota do primeiro bimestre: " <<endl;
    cin >> nota1;
    
    cout << "Informe a nota do segundo bimestre: " <<endl;
    cin >> nota2;
    
    cout << "Informe a nota do terceiro bimestre: " <<endl;
    cin >> nota3;
    
    cout << "Informe a nota do quarto bimestre: " <<endl;
    cin >> nota4;
    
    media = (nota1 + nota2 + nota3 + nota4)/4;
    
    cout << "Sua nota final é: " <<media <<endl;
    
    return 0;
    
}