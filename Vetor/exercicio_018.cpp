/*18. Uma empresa de pesquisas precisa tabular os resultados da seguinte enquete feita a um grande quantidade de organizações:

"Qual o melhor Sistema Operacional para uso em servidores?"
As possíveis respostas são:


1- Windows Server
2- Unix
3- Linux
4- Netware
5- Mac OS
6- Outro

Você foi contratado para desenvolver um programa que leia o resultado da enquete e informe ao final o resultado da mesma. O programa deverá ler os valores até ser informado o valor 0, que encerra a entrada dos dados. Não deverão ser aceitos valores além dos válidos para o programa (0 a 6). Os valores referentes a cada uma das opções devem ser armazenados num vetor. Após os dados terem sido completamente informados, o programa deverá calcular a percentual de cada um dos concorrentes e informar o vencedor da enquete. O formato da saída foi dado pela empresa, e é o seguinte:
       
Sistema Operacional Votos	%
Windows Server	    1500	17%
Unix	            3500	40%
Linux	            3000	34%
Netware	            500	    5%
Mac OS	            150	    2%
Outro	            150	    2%
Total	            8800	

O Sistema Operacional mais votado foi o Unix, com 3500 votos, correspondendo a 40% dos votos. d*/

#include <iostream>

using namespace std;

int main(){

    int contador[6] = {0};
    int total = 0;
    int op = 0;
    int percentual[6];

    while (1){
        
        cout <<"Qual o melhor Sistema Operacional para uso em servidores\n"<<endl;
        cout <<"1- Windows Server"<<endl;
        cout <<"2- Unix"<<endl;
        cout <<"3- Linux"<<endl;
        cout <<"4- Netware"<<endl;
        cout <<"5- Mac OS"<<endl;
        cout <<"6- Outro"<<endl;
        cin >>op;

        if (op == 0){
            break;
        }
        
        switch (op){
        case 1:
            contador[0]++;
            break;
        case 2:
            contador[1]++;
            break;
        case 3:
            contador[2]++;
            break;
        case 4:
            contador[3]++;
            break;
        case 5:
            contador[4]++;
            break;
        case 6:
            contador[5]++;
            break;
        
        default:
            cout <<"ERRO:informe uma opcao valida."<<endl;
            break;
        }
    }

    for (int i = 0; i < 6; i++){
        
        total += contador[i];
    }
    for (int i = 0; i < 6; i++){
        
        percentual[i] = (contador[i] * 100) / total;
    }
    
    cout <<"Sistema Operacional     Votos	Percentual\n"<<endl;
    cout <<"Windows Server	        "<<contador[0]	<<"       "<<percentual[0] <<endl;
    cout <<"Unix	                "<<contador[1]	<<"       "<<percentual[1] <<endl;
    cout <<"Linux	                "<<contador[2]	<<"       "<<percentual[2] <<endl;
    cout <<"Netware	                "<<contador[3]	<<"       "<<percentual[3] <<endl;
    cout <<"Mac OS	                "<<contador[4]	<<"       "<<percentual[4] <<endl;
    cout <<"Outro	                "<<contador[5]	<<"       "<<percentual[5] <<endl;
    cout <<"Total	                "<<total <<endl;
    
    return 0;
}