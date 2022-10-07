/******************************************************************************

16. Faça uma rotina recursiva para calcular a somatória de todos os número de 1 a N 
(N será lido do teclado).Por exemplo:se N é igual a 5, a somatória dos números será 
igual a 15, ou seja, 1+2+3+4+5= 15.

*******************************************************************************/
#include <iostream>

using namespace std;

int somatoria(int fim, int inicio=1, int soma=0);

int main()
{
    
    int fim;
    
    cout<<"Digite a quantidade de números: \n";
    cin>>fim;

    cout<< "A soma dos "<<fim<<" elementos é "<<somatoria(fim)<<"."<<endl;
    return 0;
}

int somatoria(int fim, int inicio, int soma){
    soma=soma + inicio;
    if(inicio<fim){
        somatoria(fim, ++inicio, soma);
    } else {
        return soma;
    }
}

