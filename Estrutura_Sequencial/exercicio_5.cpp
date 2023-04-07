//Faça um Programa que converta metros para centímetros.

#include <iostream>
using namespace std;

int main(){
    
    float metro = 0;
    float centimetro = 0;
    
    cout << "Informe uma medida em metro: " <<endl;
    cin >> metro;
    
    centimetro = metro*100;
    
    cout << "A medida em centimetro é: " <<centimetro <<"cm" <<endl;
    
    return 0;
}