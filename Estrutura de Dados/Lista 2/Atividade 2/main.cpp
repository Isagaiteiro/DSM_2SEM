/******************************************************************************
Escreva uma função que tenha nome e data de nascimento (dia, mês e ano). 
Portanto data é uma struct, então será struct data dentro de outra struct. 
Popule um vetor (através do usuário) que tenha 5 unidades dessa nova estrutura 
e busque a pessoa mais velha. Exiba o nome e a data de nascimento dessa pessoa mais velha.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

//função que tenha nome e data de nascimento
struct nascimento {
    int dia;
    int mes;
    int ano;
};

//struct data_nasc dentro de outra struct
struct pessoa {
    char nome[30];
    struct nascimento data_nasc;
};

int main(){
    
    int i, j;
    struct pessoa p[5];
    int aux_dia, aux_mes, aux_ano;
    char aux_nome[30];
    
    //Popule um vetor (através do usuário) que tenha 5 unidades
    for(i=0; i<5; i++){
        cout<<"Digite o nome: \n";
        cin>>p[i].nome;
        cout<<"Digite a data de nascimento \n";
        cout<<"Dia: \n";
        cin>>p[i].data_nasc.dia;
        cout<<"Mês: \n";
        cin>>p[i].data_nasc.mes;
        cout<<"Ano: \n";
        cin>>p[i].data_nasc.ano;
        cout<<"----------------------------\n";
    }
    
    //Imprimindo lista de pessoas na tela
    for(i=0; i<5; i++){
        cout<<p[i].nome<<endl;
        cout<<p[i].data_nasc.dia<<" / "<<p[i].data_nasc.mes<<" / "<<p[i].data_nasc.ano<<endl;
        cout<<"-----------\n";
    }
    
    //Busque a pessoa mais velha
    for(int i=0; i<5; i++){
        for(int j=0; i<5; i++){
            if(p[i].data_nasc.ano>=p[j].data_nasc.ano){
                
                strcpy(aux_nome,p[j].nome);
                aux_dia=p[j].data_nasc.dia;
                aux_mes=p[j].data_nasc.mes;
                aux_ano=p[j].data_nasc.ano;
                
                strcpy(p[j].nome,p[i].nome);
                p[j].data_nasc.dia=p[i].data_nasc.dia;
                p[j].data_nasc.mes=p[i].data_nasc.mes;
                p[j].data_nasc.ano=p[i].data_nasc.ano;
                
                strcpy(p[i].nome,aux_nome);
                p[i].data_nasc.dia=aux_dia;
                p[i].data_nasc.mes=aux_mes;
                p[i].data_nasc.ano=aux_ano;
            }
            
            if(p[i].data_nasc.mes>p[j].data_nasc.mes){
                
                strcpy(aux_nome,p[j].nome);
                aux_dia=p[j].data_nasc.dia;
                aux_mes=p[j].data_nasc.mes;
                aux_ano=p[j].data_nasc.ano;
                
                strcpy(p[j].nome,p[i].nome);
                p[j].data_nasc.dia=p[i].data_nasc.dia;
                p[j].data_nasc.mes=p[i].data_nasc.mes;
                p[j].data_nasc.ano=p[i].data_nasc.ano;
                
                strcpy(p[i].nome,aux_nome);
                p[i].data_nasc.dia=aux_dia;
                p[i].data_nasc.mes=aux_mes;
                p[i].data_nasc.ano=aux_ano;
            }
            if(p[i].data_nasc.dia>p[j].data_nasc.dia){
                
                strcpy(aux_nome,p[j].nome);
                aux_dia=p[j].data_nasc.dia;
                aux_mes=p[j].data_nasc.mes;
                aux_ano=p[j].data_nasc.ano;
                
                strcpy(p[j].nome,p[i].nome);
                p[j].data_nasc.dia=p[i].data_nasc.dia;
                p[j].data_nasc.mes=p[i].data_nasc.mes;
                p[j].data_nasc.ano=p[i].data_nasc.ano;
                
                strcpy(p[i].nome,aux_nome);
                p[i].data_nasc.dia=aux_dia;
                p[i].data_nasc.mes=aux_mes;
                p[i].data_nasc.ano=aux_ano;
            }
        }
    }
    cout<<"Lista ordenada: \n";
    for(i=0; i<5; i++){
        cout<<p[i].nome<<endl;
        cout<<p[i].data_nasc.dia<<" / "<<p[i].data_nasc.mes<<" / "<<p[i].data_nasc.ano<<endl;
        cout<<"-----------\n";
    }
    //Exiba o nome e a data de nascimento dessa pessoa mais velha
    cout<<"A pessoa mais velha é: \n";
    cout<<p[0].nome<<endl;
    cout<<p[0].data_nasc.dia<<" / "<<p[0].data_nasc.mes<<" / "<<p[0].data_nasc.ano<<endl;
    cout<<"-----------\n";
   
    
    return 0;
}
