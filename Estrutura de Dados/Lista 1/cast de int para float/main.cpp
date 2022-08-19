#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

/*Criar uma função que retorna o seguinte: A função recebe 4 valores do tipo 
int e retornar o triplo do 1º + o quadrado dos outros dois. Vai retornar o 
tipo float, ou seja, tem que fazer um cast do valor (procurar cast de int 
para float na internet).*/


//Cabeçalho.
float resultado(int valor[4]);

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    
    int valor[4]={44,65,76,75};
    float b = (float)valor[4];
    
    //Imprimir na tela o retorno da função resultado.
    cout<<resultado(valor);
    
    return 0;
}

float resultado(int valor[4]){
    
    return (valor[0]*3)+(valor[1]*valor[1])+(valor[2]*valor[2]);
}