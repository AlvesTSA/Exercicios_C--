/*15. A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até o n−ésimo termo.*/

#include <iostream>

using namespace std;

int main(){

    int n = 0;
    int num = 1;
    int i = 0;
    int num2 = 1;
    int num3 = 0;

    cout <<"Informe o n-termo que deseja calcular: ";
    cin >>n;

    cout << "Sequencia: "<<num <<" ";
    
    for (i = 1; i < n; i++){
        
        num3 = num + num2; 
        num = num2;
        num2 = num3;
        cout <<num <<" ";
    }
    
    return 0;
}