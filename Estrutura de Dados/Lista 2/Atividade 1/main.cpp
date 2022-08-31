/*
Considere uma estrutura de conta corrente contendo o nome do titular, 
o CPF e o valor na conta. Escreva uma função que cadastre 5 usuários e os exiba 
na tela ordenados de forma decrescente de acordo com o valor na conta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

struct banco{
        char nome[30];
        char cpf[15];
        float vlr_conta;
};

    
int main(){
    struct banco b[5], aux;
   
    //Preenchedo os dados da struct.
    for(int i=0; i<5; i++){
        cout<<"Digite o nome do titular: \n";
        cin>>b[i].nome;
        cout<<"Digite o CPF do titular: \n";
        cin>>b[i].cpf;
        cout<<"Digite o valor da conta: \n";
        cin>>b[i].vlr_conta;
        cout<<"----------------------------\n";
    }
    
    //Imprimir na tela a Struct.
    for(int i=0; i<5; i++){
        cout<<b[i].nome<<endl;
        cout<<b[i].cpf<<endl;
        cout<<b[i].vlr_conta<<endl;
        cout<<"-----------\n";
    }
    
    //Estrutura para ordenar os dados da struct.
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(b[i].vlr_conta>b[j].vlr_conta){
            
                strcpy(aux.nome, b[j].nome);
                strcpy(aux.cpf, b[j].cpf);
                aux.vlr_conta=b[j].vlr_conta;
                
                strcpy(b[j].nome,b[i].nome);
                strcpy(b[j].cpf,b[i].cpf);
                b[j].vlr_conta=b[i].vlr_conta;
                
                strcpy(b[i].nome,aux.nome);
                strcpy(b[i].cpf,aux.cpf);
                b[i].vlr_conta=aux.vlr_conta;
                
                
                
            }
        }
    }
    //Imprimir na tela a lista ordenada.
    cout<<"Lista ordenada: \n";
    for(int i=0; i<5; i++){
        cout<<b[i].nome<<endl;
        cout<<b[i].cpf<<endl;
        cout<<b[i].vlr_conta<<endl;
        cout<<"-----------\n";
    }
    return 0;
}

