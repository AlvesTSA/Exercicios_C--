//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <iostream>
using namespace std;

int main(){
    
    float medida_lado = 0;
    float area = 0;
    
    cout << "Informe a medida de um dos lados do quadrado: " <<endl;
    cin >> medida_lado;
    
    area = (medida_lado*medida_lado)*2;
    
    cout << "O dobro da area do quadrado é: " <<area <<endl;
    
    return 0;
    
}