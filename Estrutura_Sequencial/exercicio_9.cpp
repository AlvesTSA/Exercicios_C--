/* Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius. C = 5 * ((F-32) / 9). */

#include <iostream>
using namespace std;

int main(){
    
    float C = 0;
    float F = 0;
    
    cout << "Informe a temperatura em Fahrenheit: " <<endl;
    cin >> F;
    
    C = 5 * ((F-32) / 9);
    
    cout << "A temperatura em Celsius é: " <<C <<"°"  <<endl;
    
    return 0;
    
    
}
    