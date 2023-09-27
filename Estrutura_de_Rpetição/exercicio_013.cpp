/*13. Faça um programa que peça dois números, base e expoente, calcule e mostre o primeiro número elevado ao segundo número. Não utilize a função de potência da linguagem.*/

#include <iostream>

using namespace std;

int main(){

    double base = 0;
    int expoente = 0;
    double resultado = 0;
    int i = 0;

    cout <<"Informe a base: ";
    cin >> base;
    cout <<"Informe o expoente: ";
    cin >> expoente;

    resultado = base;
    cout <<base <<" elevado " <<expoente <<" = ";

    if(expoente > 0){

        i = 1;

        while (i != expoente){
            
            i++;
            resultado *= base; 

        }
    }
    else if(expoente < 0){

        expoente *= -1;
        i = 1;

        while (i != expoente){
            
            i++;
            resultado *= base; 

        }

        resultado = 1/resultado;

    }
    else{

        resultado = 1;
    }
   

    cout <<resultado;

    return 0;
    
}