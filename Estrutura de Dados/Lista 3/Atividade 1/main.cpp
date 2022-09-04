/*
A delegação francesa de Futsal deseja criar um programa que deva conter o nome do atleta, sua posição,
idade e altura. Crie uma estrutura representando um atleta. Escreva um programa que leia os dados de cinco
atletas e os exiba por ordem de idade, do mais velho para o mais novo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


struct atleta {
    char nome[30];
    char posicao[30];
    int idade;
    float altura;
} ;



int main()
{
    //at1, at2,at3, at4 e at5-São structs do tipo atleta.
    struct atleta at[5], aux;
    int i, j;
    
    //Inserindo dados na struct.
    for(i=0; i<5; i++){
        cout<<"Digite o nome do jogador: \n";
        cin>>at[i].nome;
        cout<<"Digite a posição do jogador: \n";
        cin>>at[i].posicao;
        cout<<"Digite a idade do jogador: \n";
        cin>>at[i].idade;
        cout<<"Digite a altura do jogador: \n";
        cin>>at[i].altura;
        cout<<"----------------------------\n";
    }
    
    for(i=0; i<5; i++){
        cout<<at[i].nome<<endl;
        cout<<at[i].posicao<<endl;
        cout<<at[i].idade<<endl;
        cout<<at[i].altura<<endl;
        cout<<"-----------\n";
    }
    //Percorrer a struct, localizando a menor idade.
    for (i=0; i<5; i++) 
	{
		for (j=i+1; j<5; j++) {
			if (at[i].idade < at[j].idade) 
			{
				//salva na variavel auxiliar
				strcpy(aux.nome, at[i].nome);
				strcpy(aux.posicao, at[i].posicao);
				aux.idade = at[i].idade;
				aux.altura = at[i].altura;
	
				//trocando as posicoes
				strcpy(at[i].nome, at[j].nome);
				strcpy(at[i].posicao, at[j].posicao);
    			at[i].idade = at[j].idade;
				at[i].altura = at[j].altura;
				
				strcpy(at[j].nome, aux.nome);
				strcpy(at[j].posicao, aux.posicao);
				at[j].idade = aux.idade;
				at[j].altura = aux.altura;
			}
		}
	}
    
    
    for(int i=0; i<5; i++){
        cout<<at[i].nome<<endl;
        cout<<at[i].posicao<<endl;
        cout<<at[i].idade<<endl;
        cout<<at[i].altura<<endl;
        cout<<"-----------\n";
    }
    return 0;
}




