/*24. Leia um vetor de 5 posições contendo os caracteres de um numero. Em seguida escreva esse numero por extenso.*/

#include <iostream>

using namespace std;

int main(){

    int num[5];

    cout <<"Informe 5 numeros inteiros: "<<endl;

    for (int i = 0; i < 5; i++){
        
        cin >>num[i];
    }

    cout <<"O numero formado foi: ";

    for (int i = 0; i < 5; i++){
        
        cout <<num[i];
    }
    
    return 0;
}