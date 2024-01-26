/*20. Faça um programa que carregue uma lista com os modelos de cinco carros (exemplo de modelos: FUSCA, GOL, VECTRA etc). Carregue uma outra lista com o consumo desses carros, isto é, quantos quilômetros cada um desses carros faz com um litro de combustível. Calcule e mostre:
  
 a. O modelo do carro mais econômico; 

 b. Quantos litros de combustível cada um dos carros cadastrados consome para percorrer uma distância de 1000 quilômetros e quanto isto custará, considerando um que a gasolina custe R$ 2,25 o litro. Abaixo segue uma tela de exemplo. O disposição das informações deve ser o mais próxima possível ao exemplo. Os dados são fictícios e podem mudar a cada execução do programa.

Comparativo de Consumo de Combustível
Veículo 1
Nome: fusca
Km por litro: 7
Veículo 2
Nome: gol
Km por litro: 10
Veículo 3
Nome: uno
Km por litro: 12.5
Veículo 4
Nome: Vectra
Km por litro: 9
Veículo 5
Nome: Peugeout
Km por litro: 14.5

Relatório Final
1 - fusca           -    7.0 -  142.9 litros - R$ 321.43
2 - gol             -   10.0 -  100.0 litros - R$ 225.00
3 - uno             -   12.5 -   80.0 litros - R$ 180.00
4 - vectra          -    9.0 -  111.1 litros - R$ 250.00
5 - peugeout        -   14.5 -   69.0 litros - R$ 155.17
O menor consumo é do peugeout.*/

#include <iostream>

using namespace std;

int main(){

    char carros[20];
    float consumo[5];
    float litros = 0;
    float distancia = 1000;
    float preco = 2.25;
    float valor_pagar = 0;
    float menor_consumo = 0;

    cout <<"\nComparativo de Consumo de Combustível\n"<<endl;     

    for (int i = 0; i < 5; i++){
        
        cout <<"Veiculo "<<i + 1 <<endl;
        cout <<"Nome: ";
        cin >>carros;
        cout <<"Km por litro: ";
        cin >>consumo[i];
        cout <<"\n\n";

        if (consumo[i] > menor_consumo){
            
            menor_consumo = consumo[i];
        }
        
    }

    cout <<"Relatorio final"<<endl;

    for (int i = 0; i < 5; i++){
        
        switch (i + 1){

        case 1: 
            litros = distancia / consumo[i];
            valor_pagar = litros*preco;
            cout <<"1 - fusca            -    "<<consumo[i]<<" -  "<<litros <<" litros - R$ "<<valor_pagar<<endl;
            break;
        
        case 2: 
            litros = distancia / consumo[i];
            valor_pagar = litros*preco;
            cout <<"2 - gol              -    "<<consumo[i]<<" -  "<<litros <<" litros - R$ "<<valor_pagar<<endl;
            break;
        
        case 3:
            litros = distancia / consumo[i];
            valor_pagar = litros*preco;
            cout <<"3 - uno              -    "<<consumo[i]<<" -  "<<litros <<" litros - R$ "<<valor_pagar<<endl;
            break;
        
        case 4: 
            litros = distancia / consumo[i];
            valor_pagar = litros*preco;
            cout <<"4 - vectra           -    "<<consumo[i]<<" -  "<<litros <<" litros - R$ "<<valor_pagar<<endl;
            break;
        
        case 5: //fusca
            litros = distancia / consumo[i];
            valor_pagar = litros*preco;
            cout <<"5 - pegeout          -    "<<consumo[i]<<" -  "<<litros <<" litros - R$ "<<valor_pagar<<endl;
            break;
        
        default:
            cout <<"Valor invalido"<<endl;
            break;
        }
    }
    for (int i = 0; i < 5; i++){
        
        if (menor_consumo == consumo[i]){
            
            cout <<"O menor consumo e do carro "<<i + 1 <<endl;
        }
        
    }
    
    return 0;
}