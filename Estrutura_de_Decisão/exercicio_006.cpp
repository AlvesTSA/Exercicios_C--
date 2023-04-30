/*. Faça um Programa que leia três números e mostre o maior deles.*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num3 = 0;
    int num2 = 0;
    int maior = 0;

    cout << "Informe três números: \n";
    cin >> num1 >>num2 >> num3;

    if (num1 > num2 && num1 > num3){

        maior = num1;

    }
    else if (num2 > num1 && num2 > num3){

        maior = num2;
        
    }
    else {

        maior = num3;
        
    }

    cout << "O maior número é: " <<maior;

    return 0;

}