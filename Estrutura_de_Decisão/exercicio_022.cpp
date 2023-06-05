/* Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
“Telefonou para a vítima? “ 

“Esteve no local do crime?” 

“Mora perto da vítima? “

“Devia para a vítima? “

“Já trabalhou com a vítima? “

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como “Suspeita”, entre 3 e 4 como “Cúmplice” e 5 como “Assassino“. Caso contrário, ele será classificado como “Inocente“.*/

#include <iostream>

using namespace std;

int main(){

    char resposta1;
    char resposta2;
    char resposta3;
    char resposta4;
    char resposta5;
    int contador = 0;

    cout << "Responda com 's' para sim e 'n' para não" << endl;
    cout << "Telefonou para a vítima?";
    cin >> resposta1;
    cout << "Esteve no local do crime?";
    cin >> resposta2;
    cout << "Mora perto da vítima?";
    cin >> resposta3;
    cout << "Devia para a vítima?";
    cin >> resposta4;
    cout << "Já trabalhou com a vítima?";
    cin >> resposta5;

    if(resposta1 == 's'){

        contador ++;
    }
    if(resposta2 == 's'){

        contador ++;
    }
     if(resposta3 == 's'){

        contador ++;
    }
     if(resposta4 == 's'){

        contador ++;
    }
    if(resposta5 == 's'){

        contador ++;
    }
    if(contador == 2){

        cout << "Suspeita";

    }
    else if(contador >= 3 && contador <= 4){

        cout << "Cumplice";

    }
    else if(contador == 5){

        cout << "Culpado";

    }
    else{

        cout << "Inocente";

    }

    return 0;

}