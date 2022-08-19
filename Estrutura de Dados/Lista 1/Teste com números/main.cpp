#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

/*Crie um programa que tenha uma função que receba um inteiro e verifique 
se é par,impar ou número primo. As mensagensde “É par” ou “É impar” ou “É primo”
devem ser exibidas na própria função, ou seja, a função em si não deve retornar
nada.*/

int main(){
    setlocale(LC_ALL, "portuguese");
    int num, aux, divisao=0;
    
    //Receber o numero inteiro na variável num;
    cout<<"Digite um número: \n";
    cin>>num;
    
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
    
    return 0;
}