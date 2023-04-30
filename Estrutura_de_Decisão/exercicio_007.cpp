/*aça um Programa que leia três números e mostre o maior e o menor deles.*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int maior = 0;
    int menor = 0;

    cout << "Informe 3 números: \n";
    cin >> num1 >>num2 >> num3;

    if (num1 > num2 && num1 > num3){
        
        maior = num1;

        if (num2 < num3){

            menor = num2;
        
        }
        else{

            menor = num3;

        }
    }
    
    else if (num2 > num1 && num2 > num3){
        
        maior = num2;

        if (num1 < num3){

            menor = num1;
        
        }
        else{

            menor = num3;
            
        }
    }
    
    else{
        
        maior = num2;

        if (num2 < num3){

            menor = num2;
        
        }
        else{

            menor = num3;
            
        }
    }

    cout << "Maior:  " << maior << "\nMenor: " <<menor;

    
    return 0;

}