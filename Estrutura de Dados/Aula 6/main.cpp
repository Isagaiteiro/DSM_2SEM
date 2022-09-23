#include <iostream>
#include <cstdlib>

using namespace std;
int total=0;

int soma(int valores[], int tam){
	
	if(tam==0){
		return 0;
	} else {
		total=valores[tam-1]+soma(valores,tam-1);
		return total;
	}
}

int *inverter_vetor(int valores[], int ini, int fim){
	int aux;
	if(ini==fim || ini>fim){
		return valores;
	} else {
		aux=valores[ini];
		valores[ini]=valores[fim];
		valores[fim]=aux;
		inverter_vetor(valores, ini+1, fim-1);
	}
}

int busca(int valores,int i, int tam, int procurado){
	if(i==tam){
		return -1;
	} 
	if(valores[i]==procurado){
		return i;
	}
}
int main() {
	int tam, *valores=NULL, *vetor_invertido, procura;
	
	cout<<"Digite o tamanho do vetor: \n";
	cin>>tam;
	
	//O ponteiro aponta para a memória, criando um espaço de 10 elementos.
	valores=(int*)malloc(tam*sizeof(int));
	
	//Populando vetor.
	for(int i=0; i<tam; i++){
		cout<<"Digite o valor \n";
		cin>>valores[i];
	}
	
	cout<<"Soma dos valores do vetor: \n";
	cout<<soma(valores,tam)<<endl;
	
	cout<<"Vetor invertido: \n";
	vetor_invertido=inverter_vetor(valores, 0, tam-1);
	
	for(int i=0; i<tam;i++){
		cout<<vetor_invertido[i]<<endl;
	}
	
	cout<<"Digite o valor que deseja procurar: \n";
	cin>>procura;
	
	return 0;
}
