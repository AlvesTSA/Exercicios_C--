/*13. Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em uma lista. Após isto, calcule a média anual das temperaturas e mostre todas as temperaturas acima da média anual, e em que mês elas ocorreram (mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).*/

#include <iostream>

using namespace std;

int main(){

    float temp_mes[12];
    int i = 0;
    float media = 0;

    cout <<"Informe a temperetura media de cada mes:"<<endl;

    for (i = 0; i < 12; i++){
        
        cout <<"Mes "<< i + 1 <<": ";
        cin >>temp_mes[i];
        media += temp_mes[i];
    }

    media /= i;

    cout <<"Temperatura Media do ano: "<<media <<endl;
    cout <<"Meses que tiveram temperatura acima da media\n"<<endl;

    for (i = 0; i < 12; i++){
        
        if (temp_mes[i] > media){
            
            switch (i + 1){
            case 1:
                cout <<i + 1 <<" – Janeiro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 2:
                cout <<i + 1 <<" – Fevereiro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 3:
                cout <<i + 1 <<" – Marco: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 4:
                cout <<i + 1 <<" – Abril: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 5:
                cout <<i + 1 <<" – Maio: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 6:
                cout <<i + 1 <<" – Junho: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 7:
                cout <<i + 1 <<" – Julho: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 8:
                cout <<i + 1 <<" – Agosto: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 9:
                cout <<i + 1 <<" – Setembro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 10:
                cout <<i + 1 <<" – Outubro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 11:
                cout <<i + 1 <<" – Novembro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            case 12:
                cout <<i + 1 <<" – Dezembro: "<<temp_mes[i] <<"°C" <<endl;
                break;
            
            default:
                cout <<"valor invalido"<<endl;
                break;
            }
        }
        
    }
    
    return 0;
}