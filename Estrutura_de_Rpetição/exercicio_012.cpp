/*12. Desenvolva um gerador de tabuada, capaz de gerar a tabuada de qualquer número inteiro entre 1 a 10. O usuário deve informar de qual numero ele deseja ver a tabuada. A saída deve ser conforme o exemplo abaixo:

Tabuada de 5: 

5 X 1 = 5 

5 X 2 = 10
...

5 X 10 = 50

*/

#include <iostream>

using namespace std;

int main(){

    int num = 0;
    int i = 0;
    int produto = 0;
    int num2 = 0;

    cout <<"Informe de 1 a 10 qual numero desela ver a tabuada: ";
    cin >> num;

    switch (num){
    case 1:

        cout << "Tabuada do 1: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 2:

        cout << "Tabuada do 2: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 3:

        cout << "Tabuada do 3: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 4:

        cout << "Tabuada do 4: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 5:

        cout << "Tabuada do 5: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 6:

        cout << "Tabuada do 6: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 7:

        cout << "Tabuada do 7: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 8:

        cout << "Tabuada do 8: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;

    case 9:

        cout << "Tabuada do 9: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    case 10:

        cout << "Tabuada do 10: "<<endl;

        for (i = 1; i < 11; i++){
            
            num2++;
            produto = num*num2;

           cout << num <<" x "<<num2 <<" = "<<produto <<endl; 
        }
        
        break;
    
    default:

        cout <<"Error: o numero deve ser de 1 a 10."<<endl;
        break;
    }

    return 0;

}