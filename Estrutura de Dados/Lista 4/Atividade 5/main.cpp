/******************************************************************************
5)Faça um programa que leia um vetor de inteiros do usuário, remova valores 
consecutivos repetidos e mostra o vetor atualizado. O programa deve alocar 
memória para o vetor inicial e usar a função realloc para ajustar o tamanho do vetor.
O tamanho do vetor deve ser sempre o mínimo necessário para armazenar os valores, 
ou seja, usar malloc de 1 em 1. O programa deve mostrar o tamanho final do vetor.
*******************************************************************************/
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int j=0, k=0;
	int *vetor = NULL, quantidade;
	int *vetor2;
	
	cout << "Digite a quantidade de numeros: \n";
    cin >> quantidade;
    
    vetor = (int *)malloc(quantidade * sizeof(int));	

	for (int i=0; i<quantidade; i++) {
		cout << "Informe o "<<i+1<<"º valor: " << endl;
		cin >> vetor[i];
	}
	
	cout << "=====================================\n";
	cout <<"-----------------Vetor----------------\n";
	cout << "=====================================\n";
	
	for( int i=0; i < quantidade; i++ ){
    	cout << vetor[i] <<endl;
	}
    cout << "=====================================\n";
    cout << "Tamanho: " << quantidade <<endl;
    cout << "=====================================\n";
    
    //cria um vetor auxiliar
    vetor2 = (int *)realloc(vetor, quantidade * sizeof(int));
    
    //remove os valores repetidos
    for( int i=0; i < quantidade; i++){
        for( int j=0; j < k; j++ ){
            if( vetor[i] == vetor2[j] )
                break;
        }
        
        if( j == k ){
            vetor2[k] = vetor[i];
            k++;
            quantidade--;
        }
        
    }
    
	cout << "----------Vetor atualizado-----------\n";
	cout << "=====================================\n";
	
	//imprime os valores na tela
    for( int i=0; i < k; i++ ){
        cout << vetor2[i] <<endl;
    }
	cout << "=====================================\n";
    cout << "Tamanho: " << quantidade <<endl;
    cout << "=====================================\n";		
		
	return 0;
}

