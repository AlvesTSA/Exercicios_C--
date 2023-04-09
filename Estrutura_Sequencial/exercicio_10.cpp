/* Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit. */

#include <iostream>
using namespace std;

int main(){
    
    float C = 0;
    float F = 0;
    
    cout << "Informe a temperatura em Celsius: " <<endl;
    cin >> C;
    
    F = 1.8*C + 32;
    
    cout << "A temperatura em Fahrenheit é: " <<F <<"°"  <<endl;
    
    return 0;
    
    
}
    