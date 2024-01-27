/*21. Sua organização acaba de contratar um estagiário para trabalhar no Suporte de Informática, com a intenção de fazer um levantamento nas sucatas encontradas nesta área. A primeira tarefa dele é testar todos os cerca de 200 mouses que se encontram lá, testando e anotando o estado de cada um deles, para verificar o que se pode aproveitar deles. Foi requisitado que você desenvolva um programa para registrar este levantamento. O programa deverá receber um número indeterminado de entradas, cada uma contendo: um número de identificação do mouse o tipo de defeito: necessita da esfera; necessita de limpeza; a.necessita troca do cabo ou conector; a.quebrado ou inutilizado Uma identificação igual a zero encerra o programa. Ao final o programa deverá emitir o seguinte relatório:

Relatório de Mouses
 
    Situação	                          Quantidade	Percentual
    
1- Necessita da esfera	                    40	        40%
2- Necessita de limpeza	                    30	        30%
3- Necessita troca do cabo ou conector	     15	        15%
4- Quebrado ou inutilizado	               15	        15%
*/

#include <iostream>

using namespace std;

int main(){

    int quantidade[4] = {0};
    int percentual[4];
    int op = 0;
    int identificador = 0;
    int quant_total = 0;

    cout <<"Informe o numero de identificacao e qual a situação do mouse ou digite zero como identificacao para finalizar "<<endl;

    for (int i = 0; i < 200; i++){
        
        cout <<"Identificacao: ";
        cin >>identificador;

        if (identificador == 0){
            break;
        }

        cout <<"Informe a situacao do mouse digitando 1 a 4"<<endl;
        cout <<"1- Necessita da esfera\n2- Necessita de limpeza\n3- Necessita troca do cabo ou conector\n4- Quebrado ou inutilizadon\nSituacao: ";
        cin >>op;

        switch (op){
        case 1:
            quantidade[0]++;
            break;
        
        case 2:
            quantidade[1]++;
            break;

        case 3:
            quantidade[2]++;
            break;

        case 4:
            quantidade[3]++;
            break;    
        default:
            cout <<"Valor invalido"<<endl;
            break;
        }
    }

    for (int i = 0; i < 4; i++){

        quant_total += quantidade[i];

    }
    for (int i = 0; i < 4; i++){
        
        percentual[i] = (quantidade[i] * 100) / quant_total;
    }
    
    cout <<"\n    Relatorio de Mouses     \n\n";
    cout <<"Situacao	                          Quantidade	Percentual"<<endl;
    cout <<"1- Necessita da esfera	                    "<<quantidade[0]<<"           "	        <<percentual[0]<<endl;
    cout <<"2- Necessita de limpeza	                    "<<quantidade[1]<<"           "	        <<percentual[1]<<endl;
    cout <<"3- Necessita troca do cabo ou conector	    "<<quantidade[2]<<"           "	        <<percentual[2]<<endl;
    cout <<"4- Quebrado ou inutilizado	            "<<quantidade[3]<<"           "	        <<percentual[3]<<endl;

    return 0;
}