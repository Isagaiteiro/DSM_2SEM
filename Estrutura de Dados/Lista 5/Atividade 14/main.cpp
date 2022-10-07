/******************************************************************************

14. Faça um programa que inverte uma string usando recursão.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

void inverter(string nome, int elem);
void imprimir(string nome);

int main()
{
    string nome="Suellen";
    int elem = nome.length();
    
    cout<<"Nome: \n";
    imprimir(nome);
    
    cout<<"\nNome Invertido: \n";
    inverter(nome, elem);
    
    
    /*
    for(int i=0; i<nome.length(); i++)
        nova= nome[i] + nova;
    cout << nova << endl;
    */

    return 0;
}

void inverter(string nome, int elem){
    int cont=0;
    cout<<nome[elem];
    cont++;
    if(cont<=elem){
        inverter(nome, --elem);
    }
    
}

void imprimir(string nome){
    cout<<nome<<endl;
}


