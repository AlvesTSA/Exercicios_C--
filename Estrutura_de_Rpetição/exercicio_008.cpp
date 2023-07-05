/*Faça um programa que leia 5 números e informe a soma e a média dos números.
*/

#include <iostream>

using namespace std;

    int main(){

        int i = 0;
        float soma = 0;
        float media = 0;
        float num = 0;

        for (i = 0; i < 5; i++){
            
            cout <<"Informe o "<< i + 1<<"º numero" <<endl;
            cin >> num;

            soma += num;
        }

        media = soma/i;

        cout <<"Soma: " <<soma <<"\nMedia: " <<media; 

        return 0;
    
    }