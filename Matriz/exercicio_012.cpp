
/*12. Leia uma matriz 4 x 4 e verifique se é palíndromo, isto é, sua leitura a partir de qualquer direção sempre apresentara a mesma seqüência.

   EX.                  SATOR
                        AREPO
                        TENET
                        OPERA
                        ROTAS
                        */

#include <iostream>
#define size 4
using namespace std;

int main(){

   char matriz[size][size];
   int polindromo = 1;

   cout<< "Informe uma matriz tipo char " <<size <<" x " <<size <<": "<<endl;

    for (int i = 0; i < size; i++){
      
        for (int j = 0; j < size; j++){
         
            cin >>matriz[i][j];

        }
    }
   
    for (int i = 0; i < size; i++){
      
        for (int j = 0; j < size; j++){
         
            if (matriz[i][j] != matriz[(size-1) - i][(size - 1) - j]){
                
                polindromo = 0;

                break;
            }
        }
    }

    if (polindromo){
      
      cout<<"Matriz:\n";

        for (int i = 0; i < size; i++){
      
            for (int j = 0; j < size; j++){
                
                cout <<matriz[i][j];
            }

            cout <<"\n";

        }

      cout <<"A matriz e um polindromo";

    }
    else{

        cout <<"Matriz:\n";

        for (int i = 0; i < size; i++){
      
            for (int j = 0; j < size; j++){
            
                cout <<" "<<matriz[i][j];
            }

            cout <<"\n";
        }

      cout <<"A matriz nao e polidromo";
   }

   return 0;
}
