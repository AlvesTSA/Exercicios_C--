/*32. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo:

Fatorial de: 5 

5! =  5 . 4 . 3 . 2 . 1 = 120 
*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;

    cout <<"Informe um número ao qual deseja calcular o fatorial: ";
    cin >>num;
    cout <<num <<"! = " <<num;

    for (int i = num -1; i > 0; i--){
        
        num = num * i;

        cout <<" . " <<i;
    }

    cout <<" = " <<num;

    return 0;
    
}