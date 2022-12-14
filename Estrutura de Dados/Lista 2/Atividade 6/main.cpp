/******************************************************************************

Crie um jogo onde o computador sorteia um número de 1 até 10, e você tenta adivinhar 
qual é o número. Porém esse número está vinculado a um nome, portanto use struct. 
Use uma função que faça esse sorteio aleatório, recebendo a struct como parâmetro 
e retorne o número sorteado. Na main, exiba esse número sorteado e o nome da pessoa sorteada. 
Procure na internet por Rand, Srand e Random.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>


/*O número do sorteio está vinculado a um nome, portanto use struct*/
using namespace std;

struct pessoa{
    char nome[30];
    int num;
};

typedef pessoa pessoa;
/*
Use uma função que faça esse sorteio aleatório, recebendo a struct como parâmetro 
e retorne o número sorteado.
*/
int sorteio(){
    
    int num_secreto;
    
    
    srand(0);
   
    num_secreto = rand() % 10 + 1;
    return num_secreto;
}

int main()
{
    struct pessoa p[10];
    int chute;
    char resp;
    
    strcpy(p[0].nome,"Suelen");
    strcpy(p[1].nome,"Rafaela");
    strcpy(p[2].nome,"Joelma");
    strcpy(p[3].nome,"Abner");
    strcpy(p[4].nome,"Joel");
    strcpy(p[5].nome,"Israel");
    strcpy(p[6].nome,"Tânia");
    strcpy(p[7].nome,"Erondi");
    strcpy(p[8].nome,"Daniela");
    strcpy(p[9].nome,"Rayssa");
    
    
    for(int i=0; i<10; i++){
        p[i].num=i+1;
    }
    do{
        cout<<sorteio();
    
        cout<<"\nAdvinhe o número do sorteio de 1 a 10: \n";
        cin>>chute;
        
        if(chute!=sorteio()){
            cout<<"Você errou.\nTente novamente!\n";
            resp='s';
        } else {
            cout<<"Você acertou!\n";
            cout<<"A pessoa sorteada foi: "<<p[sorteio()-1].nome<<endl;
            resp='n';
        }
    }while(resp=='s');
    return 0;
}


