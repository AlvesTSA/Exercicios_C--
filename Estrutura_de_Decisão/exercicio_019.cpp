/*Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma é uma data válida.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int dia = 0;
    int mes = 0;
    int ano = 0;
    bool data = true;

    cout << "Informe uma data dd/mm/aaaa: ";
    cin >> dia >> mes >> ano;

    if (ano < 0) {

        data = false;
    } 
    else if (mes <= 0 || mes > 12) {

        data = false;

    }
     else if (dia <= 0 || dia > 31) {

        data = false;

    } 
    else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) {
        data = false;

    } 
    else if (mes == 2) {

        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {

            if (dia > 29) {

                data = false;
            }
        }
        else {

            if (dia > 28) {

                data = false;
            }
        }
    }

    if (data) {

        cout << "Data: " << setfill('0') << setw(2) << dia << "/"
        << setw(2) << mes << "/" << setw(4) << ano << endl;
    } 
    else {

        cout << "Data inválida! Tente novamente." << endl;
    }

    return 0;
}
