/******************************************************************************

4) O programa deve criar uma matriz quadrática (dinamicamente) de valores zeros.

a)Perguntar ao usuário que tamanho será essa matriz. Utilizar um ponteiro para indicar o tamanho dessa matriz.
b)alocar em tempo de execução (dinamicamente) uma matriz quadrada de zeros,passando como parâmetros 
o número de linhas e colunas.
c)Inclua a biblioteca ctime e utilize a função clock para determinar o tempode execução da alocação de 
memória com o tamanho da matriz quadrada de tamanho 10 e 1000000.

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

	
	p = new int [linhas * colunas];
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