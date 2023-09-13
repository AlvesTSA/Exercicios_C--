/*11. Altere o programa anterior para mostrar no final a soma dos números.*/

#include <iostream>

using namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;
    int temp = 0;
    int soma = 0;

    cout <<"Informe dois numeros: "<<endl;
    cin >> num1 >> num2;

    if(num1 > num2){

        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Intervalo entre " << num1 <<" e " <<num2 <<" :"<<endl;

    while (num1 < num2 -1){
        
        num1++;
        cout << num1 <<endl;
        soma += num1; 
    }

    cout << "Soma: " << soma <<endl;

    return 0;
}