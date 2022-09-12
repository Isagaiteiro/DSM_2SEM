/******************************************************************************

Em função do aumento dos combustíveis, o setor de vendas da rede Carrefour precisa 
atualizar os valores de seus produtos no seu catálogo de vendas. O presidente ordenou um 
aumento de 4.78% para todos os itens. São 10 itens no catálogo. Sua tarefa é elaborar um 
programa que leia o nome e valor atual dos produtos (dados pelo usuário) e armazene em um 
vetor de struct, e após isso efetue o reajuste do valor dos produtos armazenando os em outro vetor, 
preservando o vetor original. O reajuste (acesso ao vetor) deverá ser feito utilizando ponteiros. 
Imprima na tela o valor reajustado, usando também ponteiros.

*******************************************************************************/
#include <iostream>

using namespace std;

struct produtos{
    char nome[30];
    double patual;
};
int main()
{
    struct produtos p[10];
    char nomeImp[30];
    double porcentagem=1.478, preco, *ptr1, pnovo[10];
    
    ptr1=&pnovo[0];
    
//São 10 itens no catálogo. Sua tarefa é elaborar um 
//programa que leia o nome e valor atual dos produtos (dados pelo usuário) e armazene em um 
//vetor de struct,   
    for(int i=0; i<5; i++){
        cout<<"Digite o nome do produto: \n";
        cin>>p[i].nome;
        cout<<"Digite o valor atual do produto: \n";
        cin>>p[i].patual;
    }
    cout<<"--------------------\n";
    cout<<"---Valor ajustado---\n";
    cout<<"--------------------\n";
//efetue o reajuste do valor dos produtos armazenando os em outro vetor, 
//preservando o vetor original  
    for(int i=0; i<5; i++){
        preco=p[i].patual*porcentagem;
        *(ptr1+i)=preco;
        cout<<"Produto: "<<p[i].nome<<"\n"<<"Valor com aumento de 4.78%: "<<*(ptr1+i)<<endl;
        cout<<"--------------------------\n";
    }
    return 0;
}

