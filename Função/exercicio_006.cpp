/*6. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias.*/

#include <iostream>
using namespace  std;

int transformaIdade(int anos,int meses,int dias){

    dias += anos * 365 + meses * 30;

    return dias;
}

int main(){

    int a,m,d = 0;

    cout <<"Informe os anos de sua idade: ";
    cin >>a;
    cout <<"Informe os meses de sua idade: ";
    cin >>m;
    cout <<"Informe os dias de sua idade: ";
    cin >>d;

    d = transformaIdade(a,m,d);

    cout <<"Voce tem "<<d <<" dias de idade.";

    return 0;    
}