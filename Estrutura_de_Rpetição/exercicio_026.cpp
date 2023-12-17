/*26. Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.*/

#include <iostream>

using namespace std;

int main(){

    int candidato = 0;
    int eleitor = 0;
    int voto1 = 0;
    int voto2 = 0; 
    int voto3 = 0;
    int i = 0;

    cout <<"Informe o numero total de eleitores: ";
    cin >>eleitor;

    for (i = 0; i < eleitor; i++){
        
        do{
            cout <<"Informe qual candidato deseja votar: [1] [2] [3] ";
            cin >>candidato;

            switch (candidato){
            case 1:
                voto1++;
                break;
            case 2:
                voto2++;
                break;
            case 3:
                voto3++;
                break;
            default:

                cout <<"erro: vote 1, 2 ou 3."<<endl;
                break;
            }
        } while (candidato > 3);
        
    }

    cout <<"Candidato 1: "<<voto1 <<" votos"<<endl;
    cout <<"Candidato 2: "<<voto2 <<" votos"<<endl;
    cout <<"Candidato 3: "<<voto3 <<" votos"<<endl;
    
    return 0;
}