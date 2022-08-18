#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

//Os preços dos produtos de uma loja serão atualizados por conta da inflação que aumentou 15%. 
//Crie um  programa  que  vai popular  o  vetor de  10  unidades  de double depois vai atualizar os preços de acordo com a inflação. 
//Depois disso, exibir o valor na tela.

int main(){
    setlocale(LC_ALL, "portuguese");
    double produtos[10];
    int x=1;
    
    //Repetição para preenchimento do vetor
    for(int i=0; i<=9;i++){
        cout<<"Digite o valor do "<< x << "° produto:\n";
        cin>>produtos[i];
        x++;
    }
    cout<<"---------------------\n";
    
    //Reseta o valor de x
    x=1;
    
    cout<<"Preço Antigo\n";
    cout<<"---------------------\n";
    
    //Repetição para imprimir o valor antigo na tela
    for(int i=0; i<=9;i++){
        cout<< x <<"° Produto "<< " : "<<produtos[i]<<endl;
        x++;
    }
    cout<<"---------------------\n";
    
    //Reseta o valor de x
    x=1;
 
    cout<<"Preço Atualizado\n";
    cout<<"---------------------\n";
    //Repetição para armazenar no vetor e imprimir na tela o valor atualizado
    for(int i=0; i<=9;i++){
        produtos[i]=produtos[i]*1.15;
        cout<< x <<"° Produto "<< " : "<<produtos[i]<<endl;
        x++;
    }
    cout<<"---------------------\n";
    
}
