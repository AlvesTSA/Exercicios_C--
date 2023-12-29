/*36. Desenvolva um programa que faça a tabuada de um número qualquer inteiro que será digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1 e terminar em 10, o valor inicial e final devem ser informados também pelo usuário, conforme exemplo abaixo:

Montar a tabuada de: 5 

Começar por: 4 

Terminar em: 7

Vou montar a tabuada de 5 começando em 4 e terminando em 7:

5 X 4 = 20

5 X 5 = 25

5 X 6 = 30

5 X 7 = 35

Obs: Você deve verificar se o usuário não digitou o final menor que o inicial.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int num_inicio = 0;
    int num_final = 0;
    int resultado = 0;

    cout <<"Montar a tabuada de: ";
    cin >>num;
    
    do{
        cout <<"Começar por: ";
        cin >>num_inicio;
        cout <<"Terminar em: ";
        cin >> num_final;

        if (num_final < num_inicio){
            
            cout <<"Erro: o valor final deve ser maior que o valor iniciaL, tente outra vez.\n";
        }
        
    } while (num_final < num_inicio);

    cout <<"Vou montar a tabuada de "<<num <<" começando em "<<num_inicio <<" e terminando em "<<num_final <<endl;
    
    for (int i = num_inicio; i <= num_final; i++){
        
        resultado = num*i;
        cout <<num <<" x "<<i <<" = "<<resultado <<endl;
    }

    return 0;
    
}