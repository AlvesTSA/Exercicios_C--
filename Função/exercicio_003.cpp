/*3. Faça um programa, com uma função que necessite de três argumentos, e que forneça a soma desses três argumentos.*/

#include <iostream>
#include <locale.h>
using namespace std;

float sum(float a, float b, float c){

    float resultado = a + b + c;

    return resultado;
}

int main(){

    const int size = 3;
    float num[size];
    setlocale(LC_ALL, "portuguese"); //saída e entrada tipo float com vírgula 
   
    for (int i = 0; i < size; i++)
    {
        cout <<"Informe o número "<<(i + 1) <<": ";
        cin >>num[i];
    }

    float result = sum(num[0],num[1],num[2]);
    cout <<"Soma dos números: "<<result;

    return 0;
}