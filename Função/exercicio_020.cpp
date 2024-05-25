/*20. Faça um programa que converta da notação de 24 horas para a notação de 12 horas. Por exemplo, o programa deve converter 14:25 em 2:25 P.M. A entrada é dada em dois inteiros. Deve haver pelo menos duas funções: uma para fazer a conversão e uma para a saída. Registre a informação A.M./P.M. como um valor ‘A’ para A.M. e ‘P’ para P.M. Assim, a função para efetuar as conversões terá um parâmetro formal para registrar se é A.M. ou P.M. Inclua um loop que permita que o usuário repita esse cálculo para novos valores de entrada todas as vezes que desejar.*/

#include <iostream>
#include <iomanip>
using namespace std;

void converterHora(int hora24,int min24,int *hora12, int *min12,char *prefixo){

    *min12 = min24;

    if (hora24 == 0)
    {
        *hora12 = 12;
        *prefixo = 'A';
    }
    else if (hora24 < 12)
    {
        *hora12 = hora24;
        *prefixo = 'A';
    }
    else if (hora24 == 12)
    {
        *hora12 = 12;
        *prefixo = 'P';
    }
    else
    {
        *hora12 = hora24 - 12;
        *prefixo = 'P';
    }  
}

void imprimir(int hora12, int min12,char prefixo){

    cout << "Horario convertido: "<<setfill('0') <<setw(2) << hora12 << ":"<<setfill('0') <<setw(2) << min12 << " "<< prefixo << ".M" <<endl;
}

int main(){

    int hora12,min12,hora24,min24 = 0;
    char prefixo,sair;

    do
    {
        cout <<"Informe a hora no formato (HH MM):\n";
        cin >>hora24 >>min24;

        converterHora(hora24,min24,&hora12,&min12,&prefixo);

        imprimir(hora12,min12,prefixo);

        cout <<"\nDeseja inserir mais algum valor, digite S para sim e N para nao:";
        cin >>sair;

    } while (sair == 's' || sair == 'S');
    
    return 0;
}