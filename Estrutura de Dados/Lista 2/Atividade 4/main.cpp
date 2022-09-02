/******************************************************************************

Considerando a estrutura do exercício anterior, escreva uma função que receba seis pontos, 
preenchidos pelo  usuário.  Os  três  primeiros  pontos  formam  um  triângulo  e  os  outros  
três  formam  outro  triângulo. Comparando os dois triângulos, classifique se são isósceles, 
equiláteros e escalenos.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

struct Ponto
{
    int x;
    int y;
    int z;
};

int main()
{
    struct Ponto p[2];
    
    cout << "Digite os três pontos do primeiro triângulo:\n";
    cin >> p[0].x;
    cin >> p[0].y;
    cin >> p[0].z;
    cout << "Digite os três pontos do segundo triângulo:\n";
    cin >> p[1].x;
    cin >> p[1].y;
    cin >> p[1].z;
    
    cout<<p[0].x<<"|"<<p[0].y<<"|"<<p[0].z<<"|"<<p[1].x<<"|"<< p[1].y<<"|"<<p[1].z<<endl;
    
    for(int i=0; i<2; i++){
        if (p[i].x > p[i].y+p[i].z || p[i].y > p[i].x+p[i].z || p[i].z > p[i].x+p[i].y ){
    			cout << "Os pontos digitados para "<<i+1<<"º triângulo, não formam um triângulo."<< endl;
    		} else
    			if (p[i].x==p[i].y && p[i].y==p[i].z) {
    				cout << "Os pontos digitados para "<<i+1<<"º triângulo, formam um triângulo equilátero."<< endl;
    			} else
    				if ( p[i].x==p[i].y or p[i].y==p[i].z || p[i].z==p[i].x) {
    					cout << "Os pontos digitados para "<<i+1<<"º triângulo, formam um triângulo isóscele." << endl;
    							// ||== or == ou
    				} else 
    					if (p[i].x!=p[i].y and p[i].y!=p[i].z and p[i].z!=p[i].x) {
    					cout << "Os pontos digitados para "<<i+1<<"º triângulo, formam um triângulo escaleno. \n";
    					}
    }
    return 0;
