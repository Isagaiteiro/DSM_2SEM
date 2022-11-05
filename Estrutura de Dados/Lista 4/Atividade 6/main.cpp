/******************************************************************************

6)Faça o exercício 4 usando duas vezes o malloc para criar a matriz, porém agora 
a matriz pode ser mxn, ou seja, não quadrática. Procure na internet a alocação 
dinâmica de memória para matrizes.

*******************************************************************************/
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {

	int *p;
	int linhas, colunas;
	clock_t t;
	t = clock();
	
	cout << "Insira a quantidade de linhas:\n";
	cin >> linhas;
	cout << "Insira a quantidade de colunas:\n";
	cin>>colunas;

	
	p = (int *)  malloc (linhas * colunas * sizeof (int));
	
	for(int i=0; i < linhas; i++){
		for(int j=0; j < colunas; j++){
			p[i] = 0;
		}
	}
	
	for(int i=0; i < linhas; i++){
		for(int j=0; j < colunas; j++){
			cout << p[i * colunas * j] << " ";
			cout << "\n";
		}
	}
	
	free(p);
	
	t = clock()-t;
	cout << "Tempo de CPU:  " << ((float)t)/CLOCKS_PER_SEC << " segundos." << endl;
	
		
	return 0;
}