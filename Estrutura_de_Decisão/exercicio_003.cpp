/*Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.*/

#include <iostream>

using namespace std;

int main(){

    char letra;

    cout << "Informe F para Feminino ou M para Masculino: ";
    cin >> letra;

    if (letra == 'F'){

        cout << "Sexo feminino.";

    }
    else if(letra == 'M'){

        cout << "Sexo masculino.";

    }
    else{

        cout << "Sexo Inválido.";

    }

    return 0;

}