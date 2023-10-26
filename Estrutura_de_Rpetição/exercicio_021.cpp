/*21. Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int resto = 0;
    int primo = 1;

    cout <<"Informe um numero inteiro: ";
    cin >>num;

    if (num <= 1){
        
        cout <<num <<" nao e um número primo.";

        return 0;
    }
    for (int i = 2; i <= num/2; i++){
        
        resto = num % i;
        
        if (resto == 0){
            primo = 0;
        }
        
    }
    if (primo){
        
        cout <<num <<" e primo";
    }
    else{

        cout <<num <<" nao e um número primo.";

    }
    
    return 0;
}