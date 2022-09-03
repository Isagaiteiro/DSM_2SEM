/******************************************************************************

Faça um programa que gerencie o estoque de um mercado e:.●Leia um pedido, 
composto por um código de produto e a quantidade. Localize este código no vetor e, se houver 
quantidade suficiente para atender ao pedido integralmente, faça o pedido, atualize o estoque 
e informe o usuário (exibir na tela item vendido, quantidade vendida e quantos restam no estoque). 
Repita este processo até zerar o estoque. Se a quantidade do pedido for maior que o estoque, exibir 
mensagem com a quantidade de itens no estoque.  

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <locale.h>

using namespace std;
//Crie e leia um vetor de 5 produtos, 
//com os dados: código (inteiro), nome (máximo 15 letras), preço e quantidade
struct Produtos{
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};

int main()
{
    setlocale (LC_ALL, "Portuguese");
    struct Produtos p[5]; 
    int psq_cod, qnt_prod;
    char resp;
    
    for(int i=0; i<5; i++){
        p[i].codigo=i+1;
    }
    
    strcpy(p[0].nome,"Arroz");
    p[0].preco=14.56;
    p[0].quantidade=180;
    
    strcpy(p[1].nome,"Feijão");
    p[1].preco=7.66;
    p[1].quantidade=100;
    
    strcpy(p[2].nome,"Trigo");
    p[2].preco=5.42;
    p[2].quantidade=40;
    
    strcpy(p[3].nome,"Açúcar");
    p[3].preco=12.58;
    p[3].quantidade=150;
    
    strcpy(p[4].nome,"Macarrão");
    p[4].preco=4.23;
    p[4].quantidade=50;
    
    
    do{
        cout<<"Digite o código do Produto que deseja:\n";
        cin>>psq_cod;
        cout<<"Digite a quantidade que deseja:\n";
        cin>>qnt_prod;
        
        //Localize este código no vetor.
        for(int i=0; i<5; i++){
            //se houver quantidade suficiente para atender ao pedido integralmente.
            if(psq_cod==p[i].codigo){
                //faça o pedido, atualize o estoque e informe o usuário.
                if(qnt_prod<=p[i].quantidade){
                    p[i].quantidade=p[i].quantidade-qnt_prod;
                    cout<<"Os produtos foram retirados do estoque.\n";
                    cout<<"Ainda há "<<p[i].quantidade<<" unidades de "<<p[i].nome<<" no estoque.\n";
                } else {
                    if(qnt_prod>p[i].quantidade){
                        cout<<"A quantidade em estoque é insuficiente.\nHá somente "<<p[i].quantidade<<" unidades no estoque.\n";
                    }
                
                }
            }
        }
        cout<<"Deseja realizar mais uma compra? (s) ou (n)\n";
        cin>>resp;
    }while(resp=='s' || resp=='S' );
    
    return 0;
}

