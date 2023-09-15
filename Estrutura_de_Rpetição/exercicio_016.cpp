/*16. A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500.*/

#include <iostream>

using namespace std;

int main(){

    int num = 1;
    int num2 = 1;
    int num3 = 0;

    cout << "Sequencia: "<<num <<" ";

    do{
        
        num3 = num + num2; 
        num = num2;
        num2 = num3;
        cout <<num <<" ";

    } while (num < 500);
    
    return 0;
}