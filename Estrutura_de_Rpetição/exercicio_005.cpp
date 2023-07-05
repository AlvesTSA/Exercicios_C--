/*Altere o programa anterior permitindo ao usuário informar as populações e as taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float populacao_A = 0;
    float populacao_B = 0;
    float taxa_cresc_A = 0;
    float taxa_cresc_B = 0;
    int ano = 0;

    do{
        cout <<"Informe a populção de A: "<<endl;
        cin >> populacao_A;
        cout <<"Informe a taxa de crescimento de A: "<<endl;
        cin >> taxa_cresc_A;
        cout <<"Informe a populção de B: "<<endl;
        cin >> populacao_B;
        cout <<"Informe a taxa de crescimento de B: "<<endl;
        cin >> taxa_cresc_B;

        if(populacao_A > populacao_B || populacao_A <= 0 || populacao_B <= 0 || taxa_cresc_A <= 0 || taxa_cresc_B <= 0){

            cout <<"valor invalido"<<endl;
        }

    } while (populacao_A > populacao_B || populacao_A <= 0 || populacao_B <= 0 || taxa_cresc_A <= 0 || taxa_cresc_B <= 0);

    taxa_cresc_A = taxa_cresc_A / 100;
    taxa_cresc_B = taxa_cresc_B / 100;
    
    while (populacao_A < populacao_B){
        
        populacao_A = populacao_A*pow(1 + taxa_cresc_A, ano++);
        populacao_B = populacao_B*pow(1 + taxa_cresc_B, ano++);
    }

    cout <<"Anos necessarios: "<<ano <<endl;
    
    return 0;
}