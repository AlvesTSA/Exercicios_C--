/*Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é par ou ímpar e positivo ou negativo*/

#include <iostream>
using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int resultado = 0;
    int op = 0;

    cout << "Informe dois números: " << endl;
    cin >> num1 >> num2;
    cout << "Escolha a operação\n\n[1]Adição\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n";
    cin >> op;

    switch (op){
    case 1:

        resultado = num1 + num2;

        break;
    
    case 2:
       
        resultado = num1 - num2;

        break;
    
    case 3:

        resultado = num1*num2;
       
        break;
    
    case 4:

        if(num2 == 0){

            cout << "Não existe divisão por zero." << endl;
           
            return 0;

        }
        else{

            resultado = num1/num2;

        }

        break;
    
    default:

        cout << "Informe uma opção válida." << endl;

        return 0;
    }

    if(resultado % 2 == 0){

        if(resultado > 0){

            cout << "Resultado: " <<  resultado << " é par e positivo." << endl;
        }
        else if(resultado == 0){

            cout << "Resultado: " <<  resultado << " é par e neutro." << endl;

        }
        else{

            cout << "Resultado: " <<  resultado << " é par e negativo." << endl;
        }
    }
    else{

        if(resultado < 0){

            cout << "Resultado: " <<  resultado << " é impar e negativo." << endl;
        }
        else{

             cout << "Resultado: " <<  resultado << " é impar e positivo." << endl;
        }
    }

    return 0;

}