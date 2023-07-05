/* Supondo que a população de um país A seja da ordem de 80000 habitantes com uma taxa anual de crescimento de 3% e que a população de B seja 200000 habitantes com uma taxa de crescimento de 1.5%. Faça um programa que calcule e escreva o número de anos necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento.

*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float populacao_A = 80000;
    float populacao_B = 200000;
    float taxa_cresc_A = 0.03;
    float taxa_cresc_B = 0.015;
    int ano = 0;

    while (populacao_A < populacao_B){
        
        populacao_A = populacao_A*pow(1 + taxa_cresc_A, ano++);
        populacao_B = populacao_B*pow(1 + taxa_cresc_B, ano++);
    }

    cout <<"Anos necessarios: "<<ano <<endl;
    
    return 0;
}