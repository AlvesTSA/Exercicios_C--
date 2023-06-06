/* Uma fruteira está vendendo frutas com a seguinte tabela de preços:

Até 5 Kg de morango: R$ 2,50 por Kg 
  
Acima de 5 Kg de morango: R$ 2,20 por Kg

Até 5 Kg de maçã: R$ 1,80 por Kg 

Acima de 5 Kg de maçã: R$ 1,50 por Kg

Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.*/

#include <iostream>

using namespace std;

int main(){

    float kilo_mo = 0;
    float kilo_ma = 0;
    float valor_mo = 0;
    float valor_ma = 0;
    float kilo = 0;
    float valor_total = 0;
    float desconto = 0;

    cout << "Informe a quantidade de maçã: " << endl;
    cin >> kilo_ma;
    cout << "Informe a quantidade de morango: " << endl;
    cin >> kilo_mo;

    if(kilo_ma > 0 && kilo_ma <= 5){
        
        valor_ma = kilo_ma*1.80;

    }
    else{

        valor_ma = kilo_ma*1.50;
    }
    if(kilo_mo > 0 && kilo_mo <= 5){

        valor_mo = kilo_mo*2.50;
    }
    else{

        valor_mo = kilo_mo*2.20;
    }

    kilo = kilo_ma + kilo_mo;
    valor_total = valor_ma + valor_mo;

    if (kilo > 8 || valor_total > 25){

        desconto = valor_total*0.01;
        valor_total = valor_total - desconto;

    }
    else{

        valor_total = valor_total;
    }

    cout << "Valor a ser pago: " << valor_total <<endl;

    return 0;
    
}