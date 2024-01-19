/*3. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.*/

#include <iostream>

using namespace std;

int main(){

    float notas[4];
    float media = 0;

    cout <<"Informe as 4 notas:";

    for (int i = 0; i < 4; i++){
        
        cin >>notas[i];

        media += notas[i]; 
    }

    media /= 4;
    cout <<"Notas: ";

    for (int i = 0; i < 4; i++){
         
        cout <<notas[i] <<" ";
    }
     
     cout <<"\nMedia: "<<media <<endl;

     return 0;
    
}