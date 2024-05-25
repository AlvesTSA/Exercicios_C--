/*4. Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3).*/

#include <iostream>
#include <iomanip>
using namespace std;
#define pi 3.14159265358979323846

double calc_vol(double r){

    double v = (4.0/3.0)*pi*r*r*r;

    return v;
}

int main(){

    double r,v = 0;

    cout <<"Informe o raio da esfera: ";
    cin >>r;

    v = calc_vol(r);
    
    cout <<"Volume da esfera: "<<fixed <<setprecision(2) <<v <<endl;

    return 0;
}