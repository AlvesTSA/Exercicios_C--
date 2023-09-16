/*19. . Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int maior = 0;
    int menor = 0;
    int n = 0;
    int i = 0;
    int soma = 0;

    cout <<"Informe a quantidade de numeros que fazem parte do conjunto: ";
    cin >>n;
    cout <<"Informe o cojunto de numero entre 0 e 1000:"<<endl;

    do{
        
        cin >>num;

        if (num <= 0 || num >= 100){

            cout <<"ERROR: os numeros devem ser entre 0 e 1000"<<endl;
        }
        
    } while (num <= 0 || num >= 100);
    
    maior = num;
    menor = num;
    soma += num;

    for (i = 1; i < n; i++){
        
        do{
        
            cin >>num;

            if (num <= 0 || num >= 100){

                cout <<"ERROR: os numeros devem ser entre 0 e 1000"<<endl;
            }
        
        } while (num <= 0 || num >= 100);
        
        soma += num;

        if (num > maior){
            
            maior = num;
        }
        else if (num < menor){
            
            menor = num;
        }

    }
    cout <<"Maior = "<<maior <<"\nMenor = "<<menor <<"\nSoma = "<<soma;

    return 0; 

}