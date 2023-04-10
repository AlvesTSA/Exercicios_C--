//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
using namespace std;

int main(){
    
    float raio = 0;
    float area = 0;
    
    cout << "informe a medida do raio: "<<endl;
    cin >> raio;
    
    area = 3.14*(raio*raio);
    
    cout << "A área do circulo é: " <<area <<endl;
    
    return 0;
    
}
