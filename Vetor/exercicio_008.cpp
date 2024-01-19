/*8. Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida.*/

#include <iostream>

using namespace std;

int main(){

    int idade[5];
    float altura[5];

    for (int i = 0; i < 5; i++){
        
        cout <<"Informe a idade da pessoa "<<i + 1 <<": "; 
        cin >>idade[i];
        cout <<"Informe a altura da pessoa "<<i + 1 <<": "; 
        cin >>altura[i];
    }
    for (int i = 4; i >= 0; i--){
        
        cout <<"Idade da pessoa "<<i + 1 <<": "<<idade[i] <<endl; 
        
        cout <<"Altura da pessoa "<<i + 1<<": "<<altura[i] <<endl; 
        
    }

    return 0;
}