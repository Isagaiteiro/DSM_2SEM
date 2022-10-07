/******************************************************************************

15. Escreva um programa que determina número usando recursão.Por exemplo:
se o usuário inserir o número 250, a saída esperada deve ser : “o número digitado tem 3 dígitos”.

*******************************************************************************/
#include <iostream>

using namespace std;

int contador(int num, int contaDigitos=0);

int main()
{
    
    int num;
    
    cout<<"Digite um número: \n";
    cin>>num;
    
    cout<<"\nO número digitado tem "<<contador(num)<<" dígito(s).\n";
    return 0;
}

int contador(int num, int contaDigitos){
    if (num == 0) {
        contaDigitos = 1;
    } else {
        while (num != 0)
        {
            contaDigitos = contaDigitos + 1;
            num = num / 10;
        }
    }
    return contaDigitos;
}
