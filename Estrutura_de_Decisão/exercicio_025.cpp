/*Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo que pergunte a idade de uma pessoa e diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).*/

#include <iostream>
using namespace std;

int main(){

    int idade = 0;

    cout << "Informe sua idade: " << endl;
    cin >> idade;

    if(idade >= 18 && idade <= 67 ){

        cout << "Pode doar sangue";
    }
    else{

        cout << "faixa de idade não permitida.";
    }

    return 0;
    
}