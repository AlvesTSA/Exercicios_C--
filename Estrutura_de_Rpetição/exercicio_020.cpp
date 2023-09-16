/*20. Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int i = 0;
    int fatorial = 0;
    int op = 0;

    do{

        do{
            cout <<"Informe umm numero ao qual deseja ver o fatorial: ";
            cin >>num;

            if (num <= 0 || num >=16){
                
                cout <<"ERROR:os numeros devem inteiros positivos e menores que 16"<<endl;
            }
            
        } while (num <= 0 || num >=16);
        
        fatorial = num;

        cout <<num <<"! = " <<num;

        for (i = num - 1; i > 0; i--){
            
            num--;
            cout <<" x " <<num;
            fatorial *= num;

        }
        
        cout <<" = "<<fatorial <<endl;

        cout <<"Informe 0 para sair ou 1 para continuar" <<endl;
        cin >>op;

    } while (op == 1);
    
    return 0;

}