/* Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.*/

#include <iostream>

using namespace std;

int main(){

    char turno;

    cout << "Qual turno você estuda ? \nDigite a letra correspondente: \n [M]-Matutino \n [V]-Vespertino \n [N]-Noturno \n";
    cin >> turno;

    switch (turno){

    case 'M':
        
        cout << "BOM DIA !";

        break;
    
    case 'V':

        cout << "BOA TARDE !";

        break;

    case 'N':

        cout << "BOA NOITE !";

        break;
    
    default:

        cout << "Valor inválido !";

        break;
    }

    return 0;

}