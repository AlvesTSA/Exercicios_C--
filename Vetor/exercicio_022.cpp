/*22. A ACME Inc., uma empresa de 500 funcionários, está tendo problemas de espaço em disco no seu servidor de arquivos. Para tentar resolver este problema, o Administrador de Rede precisa saber qual o espaço ocupado pelos usuários, e identificar os usuários com maior espaço ocupado. Através de um programa, baixado da Internet, ele conseguiu gerar o seguinte arquivo, chamado "usuarios.txt":

alexandre       456123789
anderson        1245698456
antonio         123456456
carlos          91257581
cesar           987458
rosemary        789456125

Neste arquivo, o nome do usuário possui 15 caracteres. A partir deste arquivo, você deve criar um programa que gere um relatório, chamado "relatório.txt", no seguinte formato:
Relatório de Uso do Espaço em Disco

Nr.	Usuário	    Espaço utilizado	Percentual do uso
    
1	alexandre	434,99 MB	        16,85%
2	anderson	1187,99 MB	        46,02%
3	antonio	    117,73 MB	        4,56%
4	carlos	    87,03 MB	        3,37%
5	cesar	    0,94 MB	            0,04%
6	rosemary	752,88 MB	        29,16%
    
Espaço total ocupado:	2581,57 MB
Espaço médio ocupado:	430,26 MB
  

O arquivo de entrada deve ser lido uma única vez, e os dados armazenados em memória, caso sejam necessários, de forma a agilizar a execução do programa. A conversão da espaço ocupado em disco, de bytes para megabytes deverá ser feita através de uma função separada, que será chamada pelo programa principal. O cálculo do percentual de uso também deverá ser feito através de uma função, que será chamada pelo programa principal.*/

#include <iostream>

using namespace std;

int main(){

    char pessoa1[15] = {"Alexandre"};
    char pessoa2[15] = {"Anderson"};
    char pessoa3[15] = {"Antonio"};
    char pessoa4[15] = {"Carlos"};
    char pessoa5[15] = {"Cesar"};
    char pessoa6[15] = {"Rosymari"};
    float espaco_utilizado[6] = {456123789.0, 1245698456.0, 123456456.0, 91257581.0, 987458.0, 789456125.0};
    float percentual[6];
    float soma = 0;
    float media = 0;

    for (int i = 0; i < 6; i++){

        espaco_utilizado[i] = espaco_utilizado[i] / 1000000;
        soma += espaco_utilizado[i]; 

    }
    for (int i = 0; i < 6; i++){
        
        percentual[i] = (espaco_utilizado[i] * 100) / soma;
    }
    
    media = soma / 6;

    cout <<"\n        Relatorio de Uso do Espaco em Disco\n\n";
    cout <<"Nr.	Usuario	        Espaco utilizado	Percentual do uso\n";
    cout <<"1	"<<pessoa1 <<"          "<<espaco_utilizado[0]<<" MB	        "<<percentual[0]<<endl;
    cout <<"2	"<<pessoa2 <<"          "<<espaco_utilizado[1]<<" MB	        "<<percentual[1]<<endl;
    cout <<"3	"<<pessoa3 <<"          "<<espaco_utilizado[2]<<" MB	        "<<percentual[2]<<endl;
    cout <<"4	"<<pessoa4 <<"          "<<espaco_utilizado[3]<<" MB	        "<<percentual[3]<<endl;
    cout <<"5	"<<pessoa5 <<"          "<<espaco_utilizado[4]<<" MB	        "<<percentual[4]<<endl;
    cout <<"6	"<<pessoa6 <<"          "<<espaco_utilizado[5]<<" MB	        "<<percentual[5]<<endl;
    cout <<"Espaco total ocupado:	"<<soma <<endl;
    cout <<"Espaco medio ocupado:	"<<media <<endl <<endl;

    return 0;
}