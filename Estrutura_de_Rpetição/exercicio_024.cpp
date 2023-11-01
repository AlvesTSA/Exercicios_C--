/*24. Faça um programa que calcule o mostre a média aritmética de N notas.*/

#include <stdio.h>

int main(){

    int n = 0;
    float nota = 0;
    float soma = 0;
    float media = 0;

    printf("Informe quantas notas deseja calcular: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        
        printf("Informe a %dº nota: ",i);
        scanf("%f", &nota);

        soma += nota;
    }
    media = (float)soma/n;

    printf("Nota media: %.1f",media);

    return 0;
}