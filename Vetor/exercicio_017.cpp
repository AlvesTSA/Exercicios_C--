/*17. Em uma competição de salto em distância cada atleta tem direito a cinco saltos. O resultado do atleta será determinado pela média dos cinco valores restantes. Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em seus saltos e depois informe o nome, os saltos e a média dos saltos. O programa deve ser encerrado quando não for informado o nome do atleta. A saída do programa deve ser conforme o exemplo abaixo:

Atleta: Rodrigo Curvêllo
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m


Resultado final:
Atleta: Rodrigo Curvêllo
Saltos: 6.5 - 6.1 - 6.2 - 5.4 - 5.3
Média dos saltos: 5.9 m*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

    float saltos[5];
    float media = 0;
    char nome[50];
    
    cout <<"Informe os dados dos atletas e digite sair para finalizar\n"<<endl;

    while(1){
        
        cout <<"\nAtleta: ";
        cin.getline(nome, 50);
        
        if (strcmp(nome, "sair") == 0){
            
            break;
        }
        
        cout <<"Primeiro salto: ";
        cin >>saltos[0];
        cout <<"Segundo salto: ";
        cin >>saltos[1];
        cout <<"Terceiro salto: ";
        cin >>saltos[2];
        cout <<"Quarto salto: ";
        cin >>saltos[3];
        cout <<"Quinto salto: ";
        cin >>saltos[4];

        for (int i = 0; i < 5; i++){
            
            media += saltos[i]; 
        }
        
        media /= 5;

        cout <<"\nResultado final"<<endl;
        cout <<"\nAtleta: "<<nome;
        cout <<"\nSaltos: "<<saltos[0] <<" - " <<saltos[1] <<" - " <<saltos[2] <<" - " <<saltos[3] <<" - " <<saltos[4] <<endl;
        cout <<"Media dos saltos: "<<media <<" m"<<endl;

        media = 0;
        cin.ignore(); // Limpar o buffer após a leitura dos saltos
    }

    return 0;
}