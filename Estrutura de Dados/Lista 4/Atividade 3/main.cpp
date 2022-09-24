/******************************************************************************

3)Faça um programa de estoque de loja:
a)Crie uma struct PRODUTO que possua um CODIGO(inteiro),
um NOME(char) e um PRECO(real). Ao criar esse novo tipo, crie variáveis ponteiros 
para essa estrutura.
b)Usando alocação de memória, crie um vetor de 5 elementos, porém criando 1 por 1 
dos elementosdo vetor. Faça o cadastro de 5 produtos.
c)Ordene os produtos de acordo com o preço do produto. Ordene de forma decrescente.
d)Imprima a média do valor dos preço dos produtos.
e) Imprima todos os produtos.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

/*
a)Crie uma struct PRODUTO que possua um CODIGO(inteiro),
um NOME(char) e um PRECO(real). Ao criar esse novo tipo, crie variáveis ponteiros 
para essa estrutura.
*/
struct produto{
    char nome[30];
    int *codigo;
    double *preco;
};

//c)Ordene os produtos de acordo com o preço do produto. Ordene de forma decrescente.

void ordenar(){
    
}

int main()
{
    setlocale (LC_ALL, "Portuguese");
    produto *p=NULL;
    int tam=5, cod[5];
    double vlr[5];
    
    //b)Usando alocação de memória, crie um vetor de 5 elementos. 
    p=(produto*)malloc(tam* sizeof(produto));
    
    //criando 1 por 1 dos elementosdo vetor. Faça o cadastro de 5 produtos. 
    for(int i=0; i<5; i++){
        
        cout<<"Digite o código do "<<i+1<<"º produto:\n";
        p[i].codigo=&cod[i];
        cin>>*(p[i].codigo);
        
        cout<<"Digite o nome do "<<i+1<<"º produto:\n";
        cin>>p[i].nome;
        
        cout<<"Digite o preço do "<<i+1<<"º produto:\n";
        p[i].preco=&vlr[i];
        cin>>*(p[i].preco);
    }
    
    //e) Imprima todos os produtos.
    for(int i=0; i<5; i++){
            cout<<"============================\n";
            cout<<"-----------Estoque----------\n";
            cout<<*(p[i].codigo)<<endl;
            cout<<p[i].nome<<endl;
            cout<<*(p[i].preco)<<endl;
            cout<<"-------------------------\n";
    }

    return 0;
}




