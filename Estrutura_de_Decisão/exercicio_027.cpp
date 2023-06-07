/*O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
 
Até 5 Kg de File Duplo: R$ 4,90 por Kg 
 
Acima de 5 Kg de File Duplo: R$ 5,80 por Kg
 
Até 5 Kg de Alcatra: R$  5,90 por Kg 

Acima de 5 Kg de Alcatra: R$ 6,80 por Kg

Até 5 Kg de Picanha: R$  6,90 por Kg 
 
Acima de 5 Kg de Picanha: R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar.*/

#include <iostream>

using namespace std;

int main(){

    int op = 0;
    int op2 = 0;
    float kilo = 0;
    float valor = 0;
    float desconto = 0;
    float valor_pago = 0;
    std::string tipo_carne;
    std::string tipo_pag;

    cout << "Informe o tipo de carne\n[1]-File duplo\n[2]-Alcatra\n[3]-Picanha" << endl;
    cin >> op;

    switch (op){

        case 1: tipo_carne = "File Duplo";

            cout << "Informe quantos kg de carne" << endl;
            cin >> kilo;

            if(kilo > 0 && kilo <= 5){
                
                valor = kilo*4.90;

            }
            else{

                valor = kilo*5.80;
            }
            break;
        
        case 2: tipo_carne = "Alcatra";

            cout << "Informe quantos kg de carne" << endl;
            cin >> kilo;

            if(kilo > 0 && kilo <= 5){
                
                valor = kilo*5.90;

            }
            else{

                valor = kilo*6.80;
            }
            break;
        
        case 3: tipo_carne = "Picanha";

            cout << "Informe quantos kg de carne" << endl;
            cin >> kilo;

            if(kilo > 0 && kilo <= 5){

                valor = kilo*6.90;
            }
            else{

                valor = kilo*7.80;
            }
            break;
        
        default:

            cout << "Informe uma valor válido";

            return 0;

            break;
    }

    cout << "Informe a forma de pagamento\n[1]-Cartão Tabajara\n[2]-Outro Cartão" << endl;
    cin >> op2;

    switch (op2){

        case 1: tipo_pag = "Cartao Tabajara";

            desconto = valor*0.05;
            valor_pago = valor - desconto;
            
            break;
        
        case 2: tipo_pag = "Outro Cartao";

            valor_pago = valor;
        
            break;
    
        default:

            cout << "Informe uma valor válido";

            return 0;

            break;
    }

    cout << "Tipo de carne: "<< tipo_carne << "\nQuantidade: " << kilo << "Kg" << "\nPreço total: "<< valor << "\nTipo de pagamento: " << tipo_pag << "\nValor do desconto: "<< desconto << "\nValor a pagar: " << valor_pago <<endl;

    return 0;

}
