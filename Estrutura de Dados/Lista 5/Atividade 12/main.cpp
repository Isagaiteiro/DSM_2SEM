/******************************************************************************

12. Desenvolva uma função para testar se uma pilha P1 tem mais elementos que uma pilha P2.
Utilize somente as operações Push e Pop.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"

using namespace std;


void testeTam (int num_elem1, int num_elem2);


int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    int num_elem1, num_elem2;
	elem comp;
	bool erro;
	Pilha Pilha1, Pilha2;
	
	Create(&Pilha1, &Pilha2);
	//Criando e populando pilha1
	cout << "Quantos elementos tem sua pilha 1?" << endl;
	cin >> num_elem1;

	for(int i=0; i<num_elem1; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	//Criando e populando pilha2
	cout << "Quantos elementos tem sua pilha 2?" << endl;
	cin >> num_elem2;

	cout << "Pilha criada." << endl;
	
	for(int i=0; i<num_elem2; i++)
	{
		cout << "Elemento " << i+1 << endl;
		cin >> comp;
		Push(&Pilha1, &comp, &erro);
	}
    
    testeTam (num_elem1, num_elem2);
    
	
    return 0;
}

void testeTam (int num_elem1, int num_elem2){
    if(num_elem1==num_elem2){
        cout<<"As duas pilhas tem o tamanho igual.\n";
    } else {
        cout<<"As duas pilhas tem tanhanho diferente. \n";
    }
}