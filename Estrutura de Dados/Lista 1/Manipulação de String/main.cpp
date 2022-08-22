#include <iostream>
#include <locale>
#include <cstdlib>
#include <string.h>

/*Procure a respeito das seguintes funções de manipulação de string:strcpy, strcmp, strcat, strlen  e  
faça  a  programa  a  seguir utilizando essas  funções: usuário  vai  passar  nome  e sobrenome para o 
programa(apenas duas palavras), que vai fazer asseguintes verificações: se  nome  for  maior  que  
sobrenome(usar  strcmp)então  imprimir  concatenados  o  nome  e depois o sobrenome. 
Caso contrário imprimir na tela o sobrenome e depois o nome.E se forem iguais colocar em uma 
terceira variável o nome e depois o sobrenome e exibir na tela tambémo tamanho(número de caracteres)da 
string total (nome completo do usuário).*/

using namespace std;


int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50], sobrenome[50]; 
    string completo;

    cout<<"Digite o seu nome: \n";
    cin>>nome;
    cout<<"Digite o seu sobrenome: \n";
    cin>>sobrenome;
    
    if(strcmp (nome, sobrenome)<0){
        cout<<strcat(nome,sobrenome);
    } else if(strcmp (nome, sobrenome)>0){
            cout<<strcat(sobrenome,nome);
    } else {
        completo+=nome;
        completo+=sobrenome;
        cout<<completo<<endl;
        cout<<strlen(nome)+strlen(nome);
    }
    
    return 0;
}
