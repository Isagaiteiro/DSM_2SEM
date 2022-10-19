#include <iostream>

struct Pilha {
	int topo; /* posição elemento topo */
	int capa;
	float *pElem;
};


// Cabeçalho dos métodos
void criarpilha( struct Pilha *p, int c );
int estacheia ( struct Pilha *p );
void empilhar ( struct Pilha *p, float v);
int estavazia ( struct Pilha *p );
float desempilhar ( struct Pilha *p );
float retornatopo ( struct Pilha *p );
void mostrarPilha ( struct Pilha *p );

// Cria uma pilha
void criarpilha( struct Pilha *p, int c ){
   p->topo = -1;
   p->capa = c;
   p->pElem = (float*) malloc (c * sizeof(float));

}

// Verifica se a pilha está cheia
int estacheia ( struct Pilha *p ){
	if (p->topo == p->capa - 1)
		return 1;
	else
		return 0;
}

// Empilha na pilha
void empilhar ( struct Pilha *p, float v){
	p->topo++;
	p->pElem [p->topo] = v;
}

// Verifica se pilha está vazia
int estavazia ( struct Pilha *p ){
   if( p-> topo == -1 )
      return 1;   // true
   else
      return 0;   // false
}

// Desempilha a pilha
float desempilhar ( struct Pilha *p ){

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}

float retornatopo ( struct Pilha *p){
   return p->pElem [p->topo];
}

void mostrarPilha ( struct Pilha *p, int c ){

	for ( int i=0; i<p->capa; i++){

		cout<< p->pElem[i];

	}
}



