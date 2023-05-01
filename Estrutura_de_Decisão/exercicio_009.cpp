/* Faça um Programa que leia três números e mostre-os em ordem decrescente.*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior1 = 0;
    int maior2 = 0;
    int maior3 = 0;

    cout << "Informe três números: \n";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3){

        maior1 = num1;

        if (num2 > num3){

            maior2 = num2;
            maior3 = num3;
 
        }
        else{

            maior2 = num3;
            maior3 = num2;
        }
    }
    
    else if (num2 > num1 && num2 > num3){

        maior1 = num2;

        if (num1 > num3){

            maior2 = num1;
            maior3 = num3;
 
        }
        else{

            maior2 = num3;
            maior3 = num1;
        }
    }

    else if(num3 > num2 && num3 > num1){

        maior1 = num3;

        if (num1 > num2){

            maior2 = num1;
            maior3 = num2;

        }
        else{

            maior2 = num2;
            maior3 = num1;
        }

    }

    cout << "Ordem decrescente: \n 1°) " <<maior1;
    cout << "\n 2°) " << maior2;
    cout << "\n 3°) " << maior3;

    return 0;

}
