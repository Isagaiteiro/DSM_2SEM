#include <iostream>

using namespace std;
struct Fila {

	int capacidade;
	float *dados;
	int primeiro;
	int ultimo;
	int total; 

};

//Cabeçalho
void criarFila( struct Fila *f, int c );
void inserir(struct Fila *f, int v);
int remover( struct Fila *f );
int estaVazia( struct Fila *f );
int estaCheia( struct Fila *f );
void mostrarFila(struct Fila *f);

//criar fila
void criarFila( struct Fila *f, int c ) { 

	f->capacidade = c;
	f->dados = (float*) malloc (f->capacidade * sizeof(float));
	f->primeiro = 0;
	f->ultimo = -1;
	f->total = 0; 
}

// inserir elemento na fila
void inserir(struct Fila *f, int v) {

	if(f->ultimo == f->capacidade-1)
		f->ultimo = -1;

	f->ultimo++;
	f->dados[f->ultimo] = v; // incrementa ultimo e insere
	f->total++; // mais um item inserido
}

//Remover elemento da fila
int remover( struct Fila *f ) { // pega o item do começo da fila

	int temp = f->dados[f->primeiro++]; // pega o valor e incrementa o primeiro

	if(f->primeiro == f->capacidade)
		f->primeiro = 0;

	f->total--; // um item retirado
	return temp;

}

//verificr se a fila está vazia
int estaVazia( struct Fila *f ) { 
	return (f->total==0); // retorna verdadeiro se a fila está vazia
}

//verificr se a fila está cheia
int estaCheia( struct Fila *f ) {

	return (f->total== f->capacidade); // retorna verdadeiro se a fila está cheia
}

//imprimir a Fila
void mostrarFila(struct Fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiro; cont < f->total; cont++){

		cout<<f->dados[i++];

		if (i == f->capacidade)
			i=0;

	}

}

