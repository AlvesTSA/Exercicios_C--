/* Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha igual ao nome do usuário, mostrando uma mensagem de erro e voltando a pedir as informações.*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char nome[50] = " ";
    char senha[50] = " ";

    do{
       
       cout << "Informe um nome de usuario:  "<< endl;
       cin >> nome;
       cout << "Informe uma senha:  "<< endl;
       cin >> senha;

       if(strcmp(nome, senha) == 0){

            cout << "Informe uma senha diferente do nome de usuario" <<endl;
       }
       else{

            cout << "Informação valida" << endl;
       }

    } while (strcmp(nome, senha) == 0);
    
    return 0;
}