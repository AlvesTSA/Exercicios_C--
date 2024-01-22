/*15. Faça um programa que leia um número indeterminado de valores, correspondentes a notas, encerrando a entrada de dados quando for informado um valor igual a -1 (que não deve ser armazenado). Após esta entrada de dados, faça:

 a. Mostre a quantidade de valores que foram lidos; 

 b. Exiba todos os valores na ordem em que foram informados, um ao lado do outro; 

 c. Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;

 d. Calcule e mostre a soma dos valores;
 
 e. Calcule e mostre a média dos valores;

 f. Calcule e mostre a quantidade de valores acima da média calculada;

 g. Calcule e mostre a quantidade de valores abaixo de sete;

 h. Encerre o programa com uma mensagem;

*/

#include <iostream>

using namespace std;

int main(){

    float notas[100];
    int i = 0;

    cout <<"Informe as notas e digite -1 quando terminar"<<endl;

    while (1){
        
        cin >>notas[i];

        if (notas[i] == -1){
            
            break;
        }
        
        i++;
    }
    
    //a. Mostre a quantidade de valores que foram lidos;
    cout <<"\nQuantidade de valores lidos: "<<i;

    //b. Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
    cout <<"\nValores lidos na ordem informada:"<<endl;
    for (int y = 0; y < i; y++){
        
        cout <<notas[y] <<" ";
    }
    
    //c. Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
    cout <<"\nValores lidos na ordem inversa:"<<endl;
    for (int y = i - 1; y >= 0; y--){
        
        cout <<notas[y] <<"\n";
    }

    // d. Calcule e mostre a soma dos valores;
    float soma = 0;
    cout <<"\nSoma dos valores: ";
    for (int y = 0; y < i; y++){
        
        soma += notas[y];
    }
    cout <<soma;

    //e. Calcule e mostre a média dos valores;
    float media = 0;
    cout <<"\nMedia dos valores: ";
    media = soma / (i);
    cout <<media;

    //f. Calcule e mostre a quantidade de valores acima da média calculada;
    int count = 0;
    cout <<"\nQuantidade de valores acima da media: ";
    for (int y = 0; y < i; y++){
        
        if (notas[y] > media){
            
            count++;
        }
    }
    cout <<count;

    //g. Calcule e mostre a quantidade de valores abaixo de sete;
    int count2 = 0;
    cout <<"\nQuantidade de valores abaixo de 7: ";
    for (int y = 0; y < i; y++){
        
        if (notas[y] < 7){
            
            count2++;
        }
    }
    cout <<count2;

    //h. Encerre o programa com uma mensagem;
    cout <<"\n\nMuito obrigado pela participacao"<<endl;

    return 0;
}