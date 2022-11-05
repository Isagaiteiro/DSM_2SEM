/******************************************************************************

3) Faça um programa de estoque de loja:

a)Crie uma struct PRODUTO que possua um CODIGO(inteiro),uma NOME(char)e um PRECO(real).
Ao criar esse novo tipo, crie variáveis ponteiros para essa estrutura.
b)Usando alocação de memória,crie um vetor de 5 elementos,porém criando 1 por 1 dos elementos do vetor. 
Faça o cadastro de 5 produtos.
c)Ordene os produtos de acordo com o preço do produto. Ordene de forma decrescente.
d)Imprima a média do valor dos preço dos produtos.
e)Imprima todos os produtos.

*******************************************************************************/
#include <iostream>
#include <locale>


using namespace std;


struct produtos{
	int codigo;
	char nome[20];
	float preco;
};


float mediaP (produtos *p);		

int main(int argc, char** argv) {
    produtos *p;
	setlocale(LC_ALL,"Portuguese");
	float *nome,*preco,*id;
	
	
	p = (produtos *) malloc (5 * sizeof(float));
	
	for(int i=0; i<5;i++){
	    p[i].codigo = i+1;
		cout << "Insira o nome do produto:\n";
		cin >> p[i].nome;
		cout << "Insira o preço do produto:\n";
		cin >> p[i].preco;	
	}
    
    cout << "==============================================\n";
	cout << "------------------Produtos--------------------\n";
	cout << "==============================================\n";	
	
	for(int i=0;i<5; i++){
	    cout<<"Código: "<<p[i].codigo<<endl;
	    cout<<"Produto: "<<p[i].nome<<endl;
	    cout<<"Preço: "<<p[i].preco<<endl;
	    cout<<"============================================\n";
	}
	
	cout << "==============================================\n";
	cout << "Média dos preços é de, R$" << mediaP(p)<<".\n";
	cout << "==============================================\n";	
	return 0;
}

float mediaP (produtos *p){
	float total = 0, media;
	for(int i=0;i<5;i++){
		total = total + p[i].preco;	
		media = total/5;
	}
	return media;
};
