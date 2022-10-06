/******************************************************************************

Ex.1 - Como funcina a pilha e quando ela C) usada?

A estrutura pilha armazena os dados (elementos) de forma sequencial, assim um item fica empilhado encima do outro,
ela permite empilhar e desempilhar os itens, de forma que o ultimo item a ser inserido, serC! o primeiro a ser removido.
Essa estrutura pode ser usada em funcC5es de desfazer/refazer dos editores de texto, navegaC'C#o de pC!ginas web, funC'C5es recursivas e etc.

Ex.2 - AlocaC'C#o sequencial na memoria para um conjunto de elementos?

Os elementos ficam, em posiC'C5es de memC3ria prC3ximas uma da outra,em sequC*ncia.

Ex.3 - AlocaC'C#o estC!tica na memoria para um conjunto de elementos?

O espaC'o de memC3ria para todos os elementos que poderC#o fazer parte do conjunto C) definido ao inicio, o espaC'o serC! reservado durante toda a execuC'C#o do 
programa, mesmo que nC#o estiver sendo utilizado.

Ex.4 - AlocaC'C#o dinC"mica na memoria para um conjunto de elementos?

sC#o declaradas sem a necessidade de se definir seu tamanho, pois nenhuma memC3ria serC! reservada ao colocar o programa em execuC'C#o. 
Durante a execuC'C#o do programa, no momento em que uma variC!vel ou parte de uma estrutura precise ser utilizada, sua memC3ria serC! reservada e, 
no momento em que nC#o for mais necessC!ria, deve ser liberada.

Ex.6 - Alternativa (a)


*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_pilha.h"



using namespace std;
int main (){
  setlocale (LC_ALL, "Portuguese");

  int num_elem = 5;
  elem comp;
  bool erro;
  int aux[5];
  Pilha Pilha1, Pilha2, Pilha3;
  int i=0;

  Create (&Pilha1);
  Create (&Pilha2);

  for (int i = 0; i < num_elem; i++){
      cout << "Elemento " << i + 1 << ": " << endl;
      cin >> comp;
      cout << "--------------------------------\n";
      if (comp % 2 == 0){
	    Push (&Pilha1, &comp, &erro);
	  } else {
	    Push (&Pilha2, &comp, &erro);
	  }
    }

  // Exibindo a pilha para ver se foi populada
  cout << "Elementos da Pilha 1: " << endl;
  for (int i = 0; i < num_elem; i++)
    {
      cout << Pilha1.itens[i] << endl;
    }

  cout << "Elementos da Pilha 2: " << endl;
  for (int i = 0; i < num_elem; i++)
    {
      cout << Pilha2.itens[i] << endl;
    }

  // Passando os valores da Pilha 1 e Pilha 2 para a Pilha 3
   Create (&Pilha3);

    while(Pilha2.topo>=0) // CUIDADO: quando criamos a Pilha, o topo é -1.
	{
		Pop(&Pilha2, &erro);
		if(X<0){
		    Push(&Pilha3, &X, &erro);
		} else {
		    aux[i]=X;
		    i++;
		    Push(&Pilha2, &X, &erro);
		}
		
		// CUIDADO: não precisa decrementar o topo da Pilha 1 porque ele já será decrementado dentro do Pop.
	}

  cout << "Elementos da Pilha 3: " << endl;
  for (int i = 0; i < num_elem; i++)
    {
      cout << Pilha3.itens[i] << endl;
    }

  cout << "Elementos da Pilha 2: " << endl;
  for (int i = 0; i < num_elem; i++)
    {
      cout << Pilha2.itens[i] << endl;
    }

  cout << "Elementos da aux: " << endl;
  for (int i = 0; i < num_elem; i++)
    {
      cout << aux[i] << endl;
    }

  return 0;
}
