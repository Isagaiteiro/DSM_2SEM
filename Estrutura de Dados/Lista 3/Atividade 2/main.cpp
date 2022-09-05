/******************************************************************************
 Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja :
 struct Produto {
 char nome[30];     /* Nome do produto  
 int *codigo;        /* Codigo do produto 
 double  *preco;     /* Preco do produto 
 char fornecedor[50] /* Fornecedor do produto*
 };
 
 Faça um programa que armazene 5 produtos e exiba-os na tela. 
 Obs: fique atento, porque código e preço são ponteiros dentro de struct.

*******************************************************************************/
#include <iostream>
#include <locale>


using namespace std;

struct produto{
    char nome[30];
    int *codigo;
    double *preco;
    char fornecedor[50];
};

int main(int argc, char** argv)
{
    setlocale (LC_ALL, "Portuguese");
    struct produto p[5];
    int cod[5];
    double vlr[5];
    
   
    //Gerando código de 1 a 5 para os produtos, que serão atribuidos na ordem de cadastro.
    for(int i=0; i<5; i++){
        cod[i]=i+1;
        p[i].codigo=&cod[i];
            
    }
    
    //Populando a struct 
    for(int i=0; i<5; i++){
        cout<<"Digite o nome do "<<i+1<<"º produto:\n";
        cin>>p[i].nome;
        
        cout<<"Digite o Fornecedor do "<<i+1<<"º produto:\n";
        cin>>p[i].fornecedor;
        
        cout<<"Digite o preço do "<<i+1<<"º produto:\n";
        p[i].preco=&vlr[i];
        cin>>*(p[i].preco);
    }
    
    //Imprimindo na tela a Struct
    for(int i=0; i<5; i++){
            cout<<"============================\n";
            cout<<"-----------Estoque----------\n";
            cout<<*(p[i].codigo)<<endl;
            cout<<p[i].nome<<endl;
            cout<<p[i].fornecedor<<endl;
            cout<<*(p[i].preco)<<endl;
            cout<<"-------------------------\n";
    }
    
    return 0;
}

