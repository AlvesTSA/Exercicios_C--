/*5. Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos.*/

#include <iostream>
using namespace std;

void converteTempo(int tempo_em_segundos, int *horas, int *minutos, int *segundos) {
    *horas = tempo_em_segundos / 3600;  // Calcula o número de horas
    *minutos = (tempo_em_segundos % 3600) / 60;  // Calcula o número de minutos
    *segundos = tempo_em_segundos % 60;  // Calcula os segundos restantes
}

int main() {
    int t_em_s, h, m, s;

    cout <<"Informe o tempo em segundos: ";
    cin >>t_em_s;

    converteTempo(t_em_s, &h, &m, &s);

    cout <<"Horas: "<<h <<endl;
    cout <<"Minutos: "<<m <<endl;
    cout <<"Segundos: "<<s;

    return 0;
}
 