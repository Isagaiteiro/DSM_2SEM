#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

/*Crie um programa que tenha uma função que receba um inteiro e verifique 
se é par,impar ou número primo. As mensagensde “É par” ou “É impar” ou “É primo”
devem ser exibidas na própria função, ou seja, a função em si não deve retornar
nada.*/

//Cabeçalho.
void teste(int num);

int main(){
    setlocale(LC_ALL, "portuguese");
    int num;
    
    //Receber o numero inteiro na variável num;
    cout<<"Digite um número: \n";
    cin>>num;
    
    teste(num);
    return 0;
}

void teste(int num){
    int aux, divisao=0;
    
    //Teste se o numero é par.
    if(num%2==0){
        cout<<"Esse número é par.\n";
        
    //Se o numero não é par, é impar.
    } else {
        cout<<"Esse número é impar.\n";
        
    }
    
    //Teste se o numero é primo.
    for(aux=1 ; aux<=num ; aux++){
        if(num%aux==0){
        divisao++;
        }
    }
    if(divisao==2){
        cout<<"E ele é primo.\n";
    }else{
        cout<<"E ele não é primo.\n";
    }
}
