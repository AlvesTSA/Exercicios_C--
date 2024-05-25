/*15. Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a tabuada de 1 até N. Mostre a tabuada na forma:

1 x N = N
2 x N = 2N
...
N x N = N^2*/

#include <iostream>
using namespace std;

void tabuada(int N){

    for (int i = 1; i <= N; i++)
    {
        cout <<i <<" x " <<N <<" = "<<N*i <<endl; 
    }
}

int main(){

    int N = 0;

    cout <<"Informe o numero que deseja ver a tabuada: ";
    cin >>N;

    tabuada(N);

    return 0;
}