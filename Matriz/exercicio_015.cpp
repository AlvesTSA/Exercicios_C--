/*15. Crie uma agenda que armazena, código da pessoa, número do telefone, idade. Sua agenda deve possibilitar:

(1) – inserir um contato
(2) – Remover um contato
(3) – Editar um contato
(4) – buscar um contato pelo Código.*/

#include <iostream>
#include <cstring>
using namespace std;
#define max_pessoas 100
#define size_cod 4
#define size_tel 20
#define size_idade 4

int main(){

    int op = 0;
    char cod[max_pessoas][size_cod];
    char telefone[max_pessoas][size_tel];
    char idade[max_pessoas][size_idade];
    int fim = 0;
    char codigo[size_cod];
    int count_pessoas = 0;
    int op_1 = 0;

    for (int i = 0; i < max_pessoas; i++){
        
        strcpy(cod[i], "\0");
        strcpy(telefone[i], "\0");
        strcpy(idade[i], "\0");
    }
    
    for (int i = 0; i < max_pessoas; i++){
        
        do{
        
            cout <<"Escolha uma opcao a seguir.\n\n(1)  inserir um contato\n(2)  Remover um contato\n(3)  Editar umcontato\n(4)  buscar um contato pelo Codigo\n(5)  Mostrar lista\n";
            cin >>op;

            switch (op){

                case 1: //(1) – inserir um contato
                    
                    for (int i = 0; i < max_pessoas; i++){
                        
                        cout <<"Informe o codigo da pessoa: ";
                        cin >>cod[i];
                        cout <<"Informe o numero de telefone da pessoa: ";
                        cin >>telefone[i];
                        cout <<"Informe q idade da pessoa: ";
                        cin >>idade[i];
                        cout <<"Deseja inserir mais uma pessoa ? Digite 0 para 'nao' e 1 para 'sim': ";
                        cin >>fim;

                        count_pessoas++;

                        if (fim == 0){
                            
                            break;
                        }
                    }
                    break;
                
                case 2: //(2) – Remover um contato
                    
                    cout <<"Informe o codigo da pessoa que deseja remover: ";
                    cin >>codigo;

                    for (int i = 0; i < max_pessoas; i++){
                    
                        if (strcmp(cod[i],codigo) == 0){
                        
                            int posicao_remover = i;

                            for (int j = posicao_remover; j < max_pessoas - 1; j++){
                            
                                strcpy(cod[j], cod[j+1]);
                                strcpy(telefone[j], telefone[j+1]);
                                strcpy(idade[j], idade[j+1]);
                            }
                            cout <<"Removido com sucesso.\n";
                            count_pessoas--;
                            break;
                        }
                    }    
                    break;   
                    
                case 3: //(3) – Editar um contato

                    cout <<"Informe o codigo da pessoa que deseja editar: ";
                    cin >>codigo;

                    for (int i = 0; i < max_pessoas; i++){
                    
                        if (strcmp(cod[i],codigo) == 0){
                        
                            cout <<"Informe qual campo deseja editar\n\n(1) Codigo\n(2) Telefone\n(3) Idade ";
                            cin >>op_1;

                            switch (op_1){

                                case 1:
                                    cout <<"Informe o novo codigo da pessoa: ";
                                    cin >>cod[i];
                                    break;
                                case 2:
                                    cout <<"Informe o novo numero de telefone da pessoa: ";
                                    cin >>telefone[i];
                                    break;
                                case 3:
                                    cout <<"Informe a  nova idade da pessoa: ";
                                    cin >>idade[i];
                                    break;
                                default:
                                    break;
                            }
                        }
                    }    
                    break;
                
                case 4: //(4) – buscar um contato pelo Código
                    
                    cout <<"Informe o codigo da pessoa que deseja buscar: ";
                    cin >>codigo;

                    for (int i = 0; i < max_pessoas; i++){
                    
                        if (strcmp(cod[i],codigo) == 0){

                            cout <<cod[i] <<endl <<telefone[i] <<endl <<idade[i]<<endl;
                        }
                    }

                    break;
                
                case 5: //(5) – teste

                    for (int i = 0; i < count_pessoas; i++){
                    
                        cout <<"codigo da pessoa: "<<cod[i]<<endl;
                        cout <<"telefone: "<<telefone[i] <<endl;
                        cout <<"idade: "<<idade[i] <<endl;
                    }
                    break;

                default:
                    cout <<"Erro: escolha entre 1 a 4\n";
                    break;
            }
            
        } while (op > 5 || op < 1);

        cout <<"Deseja realizar mais alguma operacao ? Digite 0 para 'nao' e 1 para 'sim': ";
        cin >>fim;

        if (fim == 0){
            
            break;
        }
    }
    
    return 0;
}
