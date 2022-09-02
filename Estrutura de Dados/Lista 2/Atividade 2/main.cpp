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
    for(i=0; i<5; i++){
        for(j=0; i<5; i++){
            if(p[i].data_nasc.dia<p[j].data_nasc.dia){
                
                aux_dia=p[j].data_nasc.dia;
                p[j].data_nasc.dia=p[i].data_nasc.dia;
                p[i].data_nasc.dia=aux_dia;
                
                aux_nome=p[i].nome;
                p[i].nome=p[j].nome;
                p[j].nome=aux_nome;
                
                aux_mes=p[j].data_nasc.mes;
                p[j].data_nasc.mes=p[i].data_nasc.mes;
                p[i].data_nasc.mes=aux_mes;
                
                aux_ano=p[j].data_nasc.ano;
                p[j].data_nasc.ano=p[i].data_nasc.ano;
                p[i].data_nasc.ano=aux_ano;
                    
                if(p[i].data_nasc.mes>p[j].data_nasc.mes){
                    
                    aux_mes=p[j].data_nasc.mes;
                    p[j].data_nasc.mes=p[i].data_nasc.mes;
                    p[i].data_nasc.mes=aux_mes;
                    
                    aux_nome=p[i].nome;
                    p[i].nome=p[j].nome;
                    p[j].nome=aux_nome;
                    
                    aux_dia=p[j].data_nasc.dia;
                    p[j].data_nasc.dia=p[i].data_nasc.dia;
                    p[i].data_nasc.dia=aux_dia;
                    
                    aux_ano=p[j].data_nasc.ano;
                    p[j].data_nasc.ano=p[i].data_nasc.ano;
                    p[i].data_nasc.ano=aux_ano;
                    
                    if(p[i].data_nasc.ano>p[j].data_nasc.ano){
                        
                        aux_ano=p[j].data_nasc.ano;
                        p[j].data_nasc.ano=p[i].data_nasc.ano;
                        p[i].data_nasc.ano=aux_ano;
                           
                        aux_nome=p[i].nome;
                        p[i].nome=p[j].nome;
                        p[j].nome=aux_nome;
                           
                        aux_dia=p[j].data_nasc.dia;
                        p[j].data_nasc.dia=p[i].data_nasc.dia;
                        p[i].data_nasc.dia=aux_dia;
                        
                        aux_mes=p[j].data_nasc.mes;
                        p[j].data_nasc.mes=p[i].data_nasc.mes;
                        p[i].data_nasc.mes=aux_mes;
                       
                    }
                    
                }
            }
        }
    }
    //Exiba o nome e a data de nascimento dessa pessoa mais velha
    cout<<"A pessoa mais velha é: \n";
    //cout<<p[cont].nome<<endl;
    //cout<<p[cont].data_nasc.dia<<" / "<<p[cont].data_nasc.mes<<" / "<<p[cont].data_nasc.ano<<endl;
    cout<<"-----------\n";
   
    
    return 0;
}
