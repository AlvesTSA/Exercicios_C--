/*23. Faça um programa que mostre todos os primos entre 1 e N sendo N um número inteiro fornecido pelo usuário. O programa deverá mostrar também o número de divisões que ele executou para encontrar os números primos. Serão avaliados o funcionamento, o estilo e o número de testes (divisões) executados.*/

#include <iostream>

using namespace std;

int main(){

    int N = 0;
    int i = 1;
    int resto = 0;
    int primo = 1;

    cout <<"Informe ate qual numero deseja ver quais sao primos: ";
    cin >>N;

    for (i = 2; i < N; i++){
        
        for (int j = 2; j <= i/2; j++){
        
            resto = i % j;
            
            if (resto == 0){
                primo = 0;

            }
        
        }
        if (primo){
            
            cout <<i <<" ";
        }
        
    }
    return 0;
}