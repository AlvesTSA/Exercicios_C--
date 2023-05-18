/* Faça um programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.

Dicas:
 
Três lados formam um triangulo quando a soma de quaisquer dos dois lados é maior que o terceiro; 
 
Triângulo Equilátero: três lados iguais; 

Triângulo Isósceles: quaisquer dois lados iguais;
 
Triângulo Escaleno: três lados diferentes.*/

#include <iostream>
using namespace std;

int main(){

    float lado_a = 0;
    float lado_b = 0;
    float lado_c = 0;

    cout << "Informe os lados do triângulo:" << endl;
    cin >> lado_a >> lado_b >> lado_c;

    if ((lado_a + lado_b) > lado_c && (lado_b + lado_c) > lado_a && (lado_a + lado_c) > lado_b && lado_a > 0 && lado_b > 0 && lado_c > 0){

        if (lado_a == lado_b && lado_a == lado_c && lado_b == lado_c){

            cout << "Triângulo equilátero" << endl;
           
        }
        else if (lado_a == lado_b || lado_a == lado_c || lado_b == lado_c){
            
            cout << "Triângulo isósceles" << endl;

        }
        else if (lado_a != lado_b && lado_a != lado_c && lado_b != lado_c){
            
            cout << "Triângulo escaleno" << endl;

        }
           
    }
    else{

        cout << "Os valores informados não formam um triângulo, reinicie o programa e tente novamente." << endl;

    }

    return 0;
    
}