/*19. As Organizações Tabajara resolveram dar um abono aos seus colaboradores em reconhecimento ao bom resultado alcançado durante o ano que passou. Para isto contratou você para desenvolver a aplicação que servirá como uma projeção de quanto será gasto com o pagamento deste abono. Após reuniões envolvendo a diretoria executiva, a diretoria financeira e os representantes do sindicato laboral, chegou-se a seguinte forma de cálculo: a.Cada funcionário receberá o equivalente a 20% do seu salário bruto de dezembro; a.O piso do abono será de 100 reais, isto é, aqueles funcionários cujo salário for muito baixo, recebem este valor mínimo; Neste momento, não se deve ter nenhuma preocupação com colaboradores com tempo menor de casa, descontos, impostos ou outras particularidades. Seu programa deverá permitir a digitação do salário de um número indefinido (desconhecido) de salários. Um valor de salário igual a 0 (zero) encerra a digitação. Após a entrada de todos os dados o programa deverá calcular o valor do abono concedido a cada colaborador, de acordo com a regra definida acima. Ao final, o programa deverá apresentar: O salário de cada funcionário, juntamente com o valor do abono; O número total de funcionário processados; O valor total a ser gasto com o pagamento do abono; O número de funcionário que receberá o valor mínimo de 100 reais; O maior valor pago como abono; A tela abaixo é um exemplo de execução do programa, apenas para fins ilustrativos. Os valores podem mudar a cada execução do programa.

Projeção de Gastos com Abono
============================ 
Salário: 1000
Salário: 300
Salário: 500
Salário: 100
Salário: 4500
Salário: 0

Salário    - Abono

R$ 1000.00 - R$  200.00
R$  300.00 - R$  100.00
R$  500.00 - R$  100.00
R$  100.00 - R$  100.00
R$ 4500.00 - R$  900.00

Foram processados 5 colaboradores
Total gasto com abonos: R$ 1400.00
Valor mínimo pago a 3 colaboradores
Maior valor de abono pago: R$ 900.00*/

#include <iostream>

using namespace std;

int main(){
    
    int num_colaborador = 0;
    float percentual = 0.20;

    cout <<"Informe o numero de colaboradores: ";
    cin >>num_colaborador;

    float salario[num_colaborador];
    float abono[num_colaborador];
    int count_minimo = 0;
    float maior_abono = 100;

    cout <<"Projeção de Gastos com Abono \n============================ "<<endl;

    for (int i = 0; i < num_colaborador; i++){
        
        cout <<"Salario " << i + 1 <<": ";
        cin >>salario[i];

        if (salario[i] == 0){
            break;
        }
        
        abono[i] = salario[i] * percentual;

        if (abono[i] <= 100){
            
            abono[i] = 100;
            count_minimo++;
        }
        if (abono[i] > maior_abono){
            
            maior_abono = abono[i];
        }
        
    }

    cout <<"Salário    - Abono" <<endl;
    float total = 0;

    for (int i = 0; i < num_colaborador; i++){
        
        cout <<"R$ "<<salario[i] <<"    - R$  "<<abono[i] <<endl;

        total += abono[i];
    }
    
    cout <<"Foram processados "<<num_colaborador <<" colaboradores." <<endl;
    cout <<"Total gasto com abonos: R$ "<<total <<endl;
    cout <<"Valor mínimo pago a "<<count_minimo <<" colaboradores." <<endl;
    cout <<"Maior valor de abono pago: R$ "<<maior_abono <<endl;

    return 0;
    
}