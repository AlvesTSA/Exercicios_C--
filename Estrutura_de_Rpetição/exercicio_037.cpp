/*37. Uma academia deseja fazer um senso entre seus clientes para descobrir o mais alto, o mais baixo, a mais gordo e o mais magro, para isto você deve fazer um programa que pergunte a cada um dos clientes da academia seu código, sua altura e seu peso. O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero) no campo código. Ao encerrar o programa também deve ser informados os códigos e valores do clente mais alto, do mais baixo, do mais gordo e do mais magro, além da média das alturas e dos pesos dos clientes.*/

#include <iostream>
using namespace std;

int main(){

    float altura = 0;
    float peso = 0;
    int codigo = 0;
    float soma_peso = 0;
    float media_peso = 0;
    float soma_altura = 0;
    float media_altura = 0;
    float maior_peso = 0;
    float maior_altura = 0;
    float menor_peso = 999;
    float menor_altura = 999;
    int count = 0;
    int cod_maior_peso = 0;
    int cod_maior_altura = 0;
    int cod_menor_peso = 0;
    int cod_menor_altura = 0;

    cout <<"\nInforme os dados e aperte 0 no campo codigo quando precisar sair.\n\n";
   
    do{
        
        cout <<"\nInforme seu codigo: ";
        cin >>codigo;

        if (codigo == 0){
            break;
        }
        
        cout <<"Informe sua altura: ";
        cin >>altura;
        cout <<"Informe seu peso: ";
        cin >>peso;

        count++;
        soma_altura += altura;
        soma_peso += peso;

        if (altura > maior_altura){

            maior_altura = altura;
            cod_maior_altura = codigo;
        }
        else if(altura < menor_altura){
           
            menor_altura = altura;
            cod_menor_altura = codigo;
        }
        if (peso > maior_peso){

            maior_peso = peso;
            cod_maior_peso = codigo;
        }
        else if(peso < menor_peso){
            
            menor_peso = peso;
            cod_menor_peso = codigo;
        }

    } while (codigo != 0);

    media_altura = soma_altura/count;
    media_peso = soma_peso/count;

    cout <<"\nCliente " <<cod_maior_altura <<" o mais alto: "<<maior_altura;
    cout <<"\nCliente "<<cod_menor_altura << " o mais baixo: "<<menor_altura;
    cout <<"\nCliente " <<cod_maior_peso <<" o mais pesado: "<<maior_peso;
    cout <<"\nCliente "<<cod_menor_peso << " o menos pesado: "<<menor_peso;
    cout <<"\nAltura media: "<<media_altura;
    cout <<"\nPeso medio: " <<media_peso;

    return 0;
}