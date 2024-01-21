/*14. Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:

"Telefonou para a vítima?" 

"Esteve no local do crime?" 

"Mora perto da vítima?"

"Devia para a vítima?"

"Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".*/

#include <iostream>

using namespace std;

int main(){

    char resposta[5];

    cout <<"Responda as perguntas com s para sim e n para nao\n";
    cout <<"Telefonou para a vítima? ";
    cin >>resposta[0];
    cout <<"Esteve no local do crime? ";
    cin >>resposta[1];
    cout <<"Mora perto da vítima? ";
    cin >>resposta[2];
    cout <<"Devia para a vítima? ";
    cin >>resposta[3];
    cout <<"Já trabalhou com a vítima? ";
    cin >>resposta[4];

    int s = 0;

    for (int i = 0; i < 5; i++){
        
        if (resposta[i] == 's'){
            
            s++;
        }
    }
    
    if (s == 2){
        
        cout <<"Suspeito.";
    }
    else if (s > 2 && s < 5){
        
        cout <<"Cumplice.";
    }
    else if (s == 5){
    
        cout <<"Assassino.";
    }
    else{

        cout <<"Inocente.";
    }
    
    return 0;
}