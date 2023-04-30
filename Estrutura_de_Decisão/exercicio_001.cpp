/* Faça um Programa que peça dois números e imprima o maior deles.*/

#include <iostream>

using namespace std;

int main(){
    
    int num1 = 0;
    int num2 = 0;

    cout << "Informe dois números: \n";
    cin >> num1 >> num2;

    if (num1 > num2){

        cout << "O maior número é: " << num1;

    }
    else{

        cout << "O maior número é: " << num2;
    }

    return 0;

}