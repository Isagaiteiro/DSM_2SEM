/******************************************************************************

Faça um programa que controle o fluxo de voos nos aeroportos do Brasil. 
Temos 5 aeroportos e 10 voos.●Crie e leia do usuário um vetor de voos, sendo que 
cada voo contém um código de aeroporto de origem e um de destino.●Crie um vetor de aeroportos, 
sendo que cada aeroporto contém seu código, nome, quantidade de voos que saem e quantidade 
de voos que chegam.Nota: Cada aeroporto é identificado por um código inteiro entre 0 e 5. 
Não aceite aeroportos de código inexistente (faça a verificação).CUIDADO: tem um valor em comum 
que interliga as duas structs. Tenha coerência na hora de popular as  structs.  Um  aeroporto  
não  pode  ter  mais  de  10  voos  nem  de  chegada  e  nem  de  saída,  faça  a verificação disso.
Por fim, exiba na tela o nome de cada aeroporto e os voos que chegaram e saíram dele, ou seja, 
o nome do aeroporto de origem do voo e o nome do aeroporto de destino do voo.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

/*
Crie um vetor de aeroportos, 
sendo que cada aeroporto contém seu código, nome, quantidade de voos que saem e quantidade 
de voos que chegam
*/
struct aeroporto{
    int codigo;
    char nome[50];
    int qnt_q_saem;
    int qnt_q_chegam;
};

/*
Crie e leia do usuário um vetor de voos, sendo que 
cada voo contém um código de aeroporto de origem e um de destino.
*/
struct voo{
    int origem;
    int destino;
    struct aeroporto;
};
int main(){
    struct voo v[10];
    struct aeroporto a[5];
    int resp, x=0;
    
    //Populando o vetor com o código de cada aeroporto.
    for(int i=0; i<5; i++){
        a[i].codigo=i+1;
    }
    //Atribuindo o nome de cada aeroporo
    strcpy(a[0].nome,"Aeroporto de São Paulo");
    strcpy(a[1].nome,"Aeroporto do Rio de Janeiro");
    strcpy(a[2].nome,"Aeroporto de Curitiba");
    strcpy(a[3].nome,"Aeroporto de Salvador");
    strcpy(a[4].nome,"Aeroporto de Brasilia");
    
    do{
        //if(x<10){
            cout<<"Escolha onde deseja embarcar: \n";
            cout<<"1- São Paulo\n";
            cout<<"2- Rio de Janeiro\n";
            cout<<"3- Curitiba\n";
            cout<<"4- Salvador\n";
            cout<<"5- Brasilia\n";
            cin>>v[x].origem;
            
            cout<<"Escolha o destino da viagem: \n";
            cout<<"1- São Paulo\n";
            cout<<"2- Rio de Janeiro\n";
            cout<<"3- Curitiba\n";
            cout<<"4- Salvador\n";
            cout<<"5- Brasilia\n";
            cin>>v[x].destino;
            
            
            for(int i=0; i<5; i++){
                if(v[x].origem==v[x].destino && v[x].origem==a[i].codigo){
                    cout<<"Destino inválido, escolha novamente\n";
                    resp='s';
                } else {
                    if(v[x].origem==a[i].codigo && v[x].origem!=v[x].destino){
                    cout<<"Sua viagem foi cadastrada no sistema.\n";
                    cout<<"Deseja cadastrar um novo voo? (s) ou (n)\n";
                    cin>>resp;
                    
                    }
                } 
            }
        x++;
        /*
        }
        
        } else {
            if(x>=10){
                cout<<"O número de voos foi excedido!";
                resp='n';            }
        }
        */
    }while(resp=='S' || resp=='s');
    
    /*
    Um  aeroporto  
    não  pode  ter  mais  de  10  voos  nem  de  chegada  e  nem  de  saída,  faça  a verificação disso.
    Por fim, exiba na tela o nome de cada aeroporto e os voos que chegaram e saíram dele, ou seja, 
    o nome do aeroporto de origem do voo e o nome do aeroporto de destino do voo.
    */
    
    return 0;
}

