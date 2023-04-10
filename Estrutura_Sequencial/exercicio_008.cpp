/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/

#include <iostream>
using namespace std;

int main(){
    
    float ganho_hora = 0;
    float hora_mes = 0;
    float salario = 0;
    
    cout <<"Informe quanto você ganha por hora: " <<endl;
    cin >> ganho_hora;
    
    cout <<"Informe quantas horas você trabalhou no mes: " <<endl;
    cin >> hora_mes;
    
    salario = ganho_hora*hora_mes;
    
    cout << "Seu salário é: " <<salario <<"reais" <<endl;
    
    return 0;
    
}