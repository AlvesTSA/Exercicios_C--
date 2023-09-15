/*17. Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int i = 0;
    int fatorial = 0;

    cout <<"Informe umm numero ao qual deseja ver o fatorial: ";
    cin >>num;

    fatorial = num;

    cout <<num <<"! = " <<num;

    for (i = num - 1; i > 0; i--){
        
        num--;
        cout <<" x " <<num;
        fatorial *= num;

    }
    
    cout <<" = "<<fatorial;

    return 0;

}