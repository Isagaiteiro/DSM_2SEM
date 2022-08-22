#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

int crescente(int numeros[10]);
int decrescente(int*);
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Portuguese");
    int numeros[10], ordem, auxiliar;
    
//Crie um  programa  que  popule  um  vetor  de  10 valores  inteiros, passados  pelo  usuário.     
    for(int i=0; i<=9; i++){
    cout<<"Digite o "<<i+1<<"º valor: \n";
    cin>>numeros[i];
    }
//Pergunte ao usuário se ele quer ordenar de forma crescente ou decrescente.
    cout<<"Escolha como deseja organizar os números: \n";
    cout<<"1- Ordem Crescente.\n";
    cout<<"2- Ordem Decrescente.\n";
    cin>>ordem;
    
    if(ordem==1){
        crescente(numeros);
    } else {
        decrescente(numeros);
    }
    
    for(int i=0; i<=9; i++){
    cout<<numeros[i];
    }
    
    
    return 0;
}

//ordenar de forma crescente ou decrescente devem ser feitas em duas funções separadas.
int crescente(int numeros[10]){
    int auxiliar;
    
    //boubble sort
    for(int i=0;i<10;i++){
            for (int j=0;j<10;j++){
                 if(numeros[i]<numeros[j]){
                    auxiliar = numeros[i];
                    numeros[i]=numeros[j];
                    numeros[j] = auxiliar;
                    
                 }
            }
        }
    return 0;
}

int decrescente(int numeros[10]){
    int auxiliar;
    
    //boubble sort
    for(int i=0;i<10;i++){
            for (int j=0;j<10;j++){
                 if(numeros[i]>numeros[j]){
                    auxiliar = numeros[i];
                    numeros[i]=numeros[j];
                    numeros[j] = auxiliar;
                    
                 }
            }
        }
    return 0;
}
