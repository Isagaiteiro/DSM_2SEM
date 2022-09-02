/******************************************************************************

Escreva um programa que calcule a distância entre dois pontos no plano cartesiano. 
Cada ponto é um par (x,y)  de  reais  (double).  Escreva  uma  estrutura  para  armazenar  cada  ponto.  
O  cálculo  da  distância deverá ser feita em uma função separada que vai receber os dois pontos 
(na forma de struct), fazer o cálculo e retornar o resultado para ser exibido na main.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;

//estrutura  para  armazenar  cada  ponto
struct Ponto
{
    double x;
    double y;
};


double entrada()
{    
    struct Ponto p1, p2;
    double distancia;
    
    cout << "Digite as coordenadas do primeiro ponto:\n";
    cin >> p1.x;
    cin >> p1.y;
    cout << "Digite as coordenadas do segundo ponto:\n";
    cin >> p2.x;
    cin >> p2.y;
    
    cout<<p1.x<<"|"<<p1.y<<"|"<<p2.x<<"|"<< p2.y<<endl;
    distancia = pow((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y), 0.5);
    
    cout<<"\nA distância entre os ponto é:\n";
    return distancia;
}

int main()
{
    struct Ponto p1, p2;
    
    
    cout<<entrada();
    
    return 0;
}
