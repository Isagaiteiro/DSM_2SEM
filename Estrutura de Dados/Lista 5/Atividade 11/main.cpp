/******************************************************************************

11.) Desenvolva uma função para inverter a posição dos elementos de uma pilha P. 
Utilize somente as operações Push e Pop.
*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num_elem;
	elem comp;
	bool erro;
	Pilha Pilha1, Pilha2;
	cout << "Quantos elementos tem sua pilha?" << endl;
	cin >> num_elem;
	
	Create(&Pilha1);
	cout << "Pilha criada." << endl;
	

	for(int i=0; i<num_elem; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	// Exibindo a pilha para ver se foi populada
	cout << "Elementos da Pilha 1: " << endl;
	for(int i=0; i<num_elem; i++)
	{
		cout << Pilha1.itens[i] << endl;
	}
	
	// Passando os valores da Pilha 1 para a Pilha 2
	Create(&Pilha2);
	while(Pilha1.topo>=0)
	{
		Pop(&Pilha1, &erro);
		Push(&Pilha2, &X, &erro);
	}
	
	cout << "Elementos da Pilha 1: " << endl;
	for(int i=0; i<num_elem; i++)
	{
	    Pilha1.itens[i]=Pilha2.itens[i];
		cout << Pilha1.itens[i] << endl;
	}
	
	
    return 0;
}