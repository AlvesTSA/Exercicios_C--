/* Faça um programa que leia 5 números e informe o maior número.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int maior = 0;
    int i = 1;

    cout <<"Informe 5 numeros"<<endl;
    cout <<"Informe o 1º numero"<<endl;
    cin >> maior;

    for (i = 1; i < 5; i++){
        
        cout <<"Informe o "<< i + 1<<"º numero" <<endl;
        cin >> num;

        if(num > maior){

            maior = num;
        }
    }
    
    cout <<"Maior: "<<maior;

    return 0;
}