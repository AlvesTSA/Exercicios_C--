/*Faça um programa que leia e valide as seguintes informações:

Nome: maior que 3 caracteres; 
Idade: entre 0 e 150; 
Salário: maior que zero;
Sexo: 'f' ou 'm';
Estado Civil: 's', 'c', 'v', 'd';     */

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char nome[50] = "";
    int idade = 0;
    float salario = 0;
    char sexo = ' ';
    char estado_civil = ' ';

    //Validação do nome

    do{

        cout <<"Informe seu nome: "<< endl;
        cin >> nome;

        if(strlen(nome) < 4){

            cout << "Nome invalido. Digite um nome com mais de tres caractere"<<endl;
        }

    }while(strlen(nome) < 4);

    // validação da idade

    do{

        cout <<"Informe sua idade: "<< endl;
        cin >> idade;

        if(idade <= 0 || idade >= 150){

            cout << "Valor invalido."<<endl;
        }

    }while(idade <= 0 || idade >= 150);

    // validação do salario

    do{

        cout <<"Informe seu salario: "<< endl;
        cin >> salario;

        if(salario <= 0){

            cout << "Valor invalido. Informe um valor maior que zero"<<endl;
        }

    }while(salario <= 0);

    // validação do sexo

    do{

        cout <<"Informe seu sexo: "<< endl;
        cin >> sexo;

        if(sexo != 'm' && sexo != 'f'){

            cout << "Valor invalido."<< endl;
        }

    }while(sexo != 'm' && sexo != 'f');

    // validação do estado civil

    do{

        cout <<"Informe seu estado civil: \n[s]-Solteiro\n[c]-Casado\n[v]-Viuvo\n[d]-Divorciado\n"<< endl;
        cin >> estado_civil;

        if(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd'){

            cout << "Valor invalido."<<endl;
        }

    }while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');

    cout << "Nome: " << nome <<"\nIdade: " << idade <<"\nSalario: "<< salario <<"\nSexo: "<< sexo <<"\nEstado civil: "<< estado_civil << endl;

    return 0;
}