/*9. Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo:

Nota	       Conceito
de 0,0 a 4,9	 D
de 5,0 a 6,9	 C
de 7,0 a 8,9	 B
de 9,0 a 10,0	 A

*/

#include <iostream>
using namespace std;

char conceitoNota(float nota){

    if (nota >= 0.0 && nota <= 4.9)
    {
        return 'D';
    }
    else if (nota >= 5.0 && nota <= 6.9)
    {
        return 'C';
    }
    else if (nota >= 7.0 && nota <= 8.9)
    {
        return 'B';
    }
    else
    {
        return 'A';
    }  
}

int main(){

    float nota = 0.0;
    char conceito;

    cout <<"Informe sua nota media: ";
    cin >>nota;

    conceito = conceitoNota(nota);
    cout <<"Conceito: "<<conceito;

    return 0;
}