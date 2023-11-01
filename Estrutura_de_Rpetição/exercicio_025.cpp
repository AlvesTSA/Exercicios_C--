/*25. Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.*/

#include <stdio.h>

int main(){

    int n = 0;
    int idade = 0;
    int soma = 0;
    float media = 0;

    printf("Informe o quantas pessoas tem na sala: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        
        printf("Informe a idade da %dº pessoa: ", i);
        scanf("%d", &idade);

        soma += idade; 
    }
    media = (float)soma/n;

    if (media > 0 && media <= 25){
        
        printf("Turma jovem");
    }
    else if(media >= 26 && media <= 60){

        printf("Turma adulta");
    }
    else{

        printf("Turma idosa");
    }
    
    return 0;
}