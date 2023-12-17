/*25. Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.*/

#include <iostream>

using namespace std;

int main(){

    int n = 0;
    int idade = 0;
    int soma = 0;
    float media = 0;

    cout <<"Informe o quantas pessoas tem na sala: " <<endl;
    cin >> n;

    for (int i = 1; i <= n; i++){
        
        cout <<"Informe a idade da " << i << "º" <<"pessoa: ";
        cin >>idade;

        soma += idade; 
    }
    media = (float)soma/n;

    if (media > 0 && media <= 25){
        
        cout <<"Turma jovem";
    }
    else if(media >= 26 && media <= 60){

        cout <<"Turma adulta";
    }
    else{

        cout <<"Turma idosa";
    }
    
    return 0;
}