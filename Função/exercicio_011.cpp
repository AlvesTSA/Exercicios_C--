/*11. A prefeitura de uma cidade fez uma pesquisa entre os seus habitantes, coletando dados sobre o salário e número de filhos. Faça um procedimento que leia esses dados para um número não determinado de pessoas e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual de pessoas com salário até R$350,00.*/
#include <iomanip>
#include <iostream>
using namespace std;

void pesquisa(float *media_salario,int *media_filhos,float *maior_salario,float *percentual){

    int num_filhos = 0;
    float salario = 0.0;
    int count = 0;
    int count2 = 0;
    *media_salario = 0.0;
    *media_filhos = 0;
    *maior_salario = 0.0;

    cout <<"Preencha os dados ou digite -1 nos dois campos para sair\n\n";
    
    do
    {
        cout <<"Informe seu salario: ";
        cin >>salario;
        cout <<"Informe quantos filhos voce tem: ";
        cin >>num_filhos;

        if (salario == -1 && num_filhos == -1)
        {
            break;
        }
        
        count2++;
        *media_salario += salario;
        *media_filhos += num_filhos;

        if (salario > *maior_salario)
        {
            *maior_salario = salario;
        }
        if (salario > 0 && salario <= 350.0)
        {
            count++;
        }
    }while(salario != -1 && num_filhos != -1);

    *media_salario /= (float)count2;
    *media_filhos /= count2;
    *percentual = (count*100.0) / (float)count2;
}

int main(){

    float media_salario = 0.0;
    int media_filhos = 0;
    float maior_salario = 0.0;
    float percentual = 0.0;
    
    pesquisa(&media_salario, &media_filhos, &maior_salario, &percentual);
    
    cout <<"Media salarial: "<<fixed <<setprecision(2) <<media_salario <<endl;
    cout <<"Media de filhos: " <<media_filhos <<endl;
    cout <<"Maior salario: "<<fixed <<setprecision(2)<<maior_salario<<endl;
    cout <<"Percentual de salario ate R$ 350,00: "<<fixed <<setprecision(2)<<percentual <<"%"<<endl;

    return 0;
}