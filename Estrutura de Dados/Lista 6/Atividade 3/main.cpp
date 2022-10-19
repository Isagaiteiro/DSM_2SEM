/******************************************************************************

Escreva um método para inverter a ordem dos elementos de uma fila de 10 elementos, 
usando uma pilha como estrutura auxiliar. Exiba a fila invertida.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include "fila.h"
#include "estrutura_pilha.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
	struct Fila fila1;
	struct Pilha pilha1;
	int capacidade=10;
	float valorf, valorp;
	
	criarFila( &fila1, capacidade);
	
    for(int i=0; i<capacidade; i++){
        cout<<"Digite o elemento da fila: \n";
        cin >> valorf;
		inserir(&fila1, valorf);
    }
    
    cout<<"Fila odenada: \n";
    mostrarFila(&fila1);
    
    //criar pilha
    criarpilha( &pilha1, capacidade );
    
    //retirando os elementos da fila e guardando na pilha.
    for(int i=0; i<capacidade; i++){
        valorp=remover(&fila1); //váriavel recebe o primeiro elemento da fila e remove o valor da fila
        empilhar ( &pilha1, valorp);//guardando o valor na pilha
    }
    
    //retirando os elementos da pilha e guardando na fila.
    for(int i=0; i<capacidade; i++){
        valorf=desempilhar (&pilha1); //váriavel recebe o último elemento da pilha e remove o valor da pilha
        inserir(&fila1, valorf);//guardando o valor na fila
    } 

    cout<<"\nFila invertida: \n";
    mostrarFila(&fila1);
   
    return 0;
}
