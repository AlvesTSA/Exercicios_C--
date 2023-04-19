/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos).
*/

#include <iostream>

using namespace std;

int main(){

    double mb = 0;
    double mbps = 0;
    double t = 0;

    cout << "Informe o tamanho do arquivo: ";
    cin >> mb;

    cout << "Informe a velocidade do link: ";
    cin >> mbps;

    t = mb/mbps;

    cout << "Tempo de dowloading: " <<t  <<"min" <<endl;

    return 0;
    
}