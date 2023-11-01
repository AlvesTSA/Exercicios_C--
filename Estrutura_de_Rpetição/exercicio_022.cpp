/*22. Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int resto = 0;
    int primo = 1;

    cout <<"Informe um numero inteiro: ";
    cin >>num;

    if (num <= 1){
        
        cout <<num <<" nao e um número primo.";

        return 0;
    }
    for (int i = 2; i <= num/2; i++){
        
        resto = num % i;
        
        if (resto == 0){
            primo = 0;
        }
        
    }
    if (primo){
        
        cout <<num <<" e primo";
    }
    else{

        cout <<num <<" nao e um numero primo. Pois e divisivel por ";

        for (int i = 1; i <= num; i++){
        
            resto = num % i;
            
            if (resto == 0){
                cout <<i <<" ";
            }
        
        }
    }
    
    return 0;
}