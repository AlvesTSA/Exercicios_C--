/*Faça um programa que receba dois números inteiros e gere os números inteiros que estão no intervalo compreendido por eles.*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int temp = 0;

    cout <<"Informe dois numeros: "<<endl;
    cin >> num1 >> num2;

    if(num1 > num2){

        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    while (num1 < num2 -1){
        
        num1++;
        cout << num1 <<endl;
    }

    return 0;
}