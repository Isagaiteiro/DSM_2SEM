
#include <stdio.h>
#include <iostream>
//Biblioteca da pilha.
#include <stack>

using namespace std;
int main()
{
    //pilha do tipo inteiro com o nome p1.
    stack <int> p1;
    stack <int> p2;
    stack <int> p3;
    int num[20];
    
    if(p1.empty()){
        cout<<"Pilha vazia\n";
    } else {
        cout<<"Pilha com elementos\n";
    }
    
    for(int i=0; i<4; i++){
        cout<<"Digite o "<<i+1<<"º número: \n";
        cin>>num[i];
        cout<<"--------------------------------\n";
        //adicionando elementos na pilha.
        if (num[i] % 2 == 0) {
            p1.push(num[i]);
        } else {
            p2.push(num[i]);
        }
    }
    
    cout<<"================================\n";
    cout<<"----------Pilha inicial---------\n";
    cout<<"================================\n";
    cout<<"Tamanho da pilha 1: "<< p1.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 2: "<< p2.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 3: "<< p3.size() <<endl;
    
    //retirando elementos da pilha.
    p2.pop();
    cout<<"================================\n";
    cout<<"--Retirando elementos da pilha--\n";
    cout<<"================================\n";
    cout<<"Tamanho da pilha 1: "<< p1.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 2: "<< p2.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 3: "<< p3.size() <<endl;
    
    //Visualizar o elemento que está no topo da pilha.
    cout<<"================================\n";
    cout<<"---------Topo da pilha----------\n";
    cout<<"================================\n";
    cout<<"Número do topo: "<<p1.top()<<endl;
    cout<<"--------------------------------\n";
    cout<<"Número do topo: "<<p2.top()<<endl;
    cout<<"--------------------------------\n";
    cout<<"Número do topo: "<<p3.top()<<endl;
    
    //Zerando todos os elementos da pilha;
    while(!p1.empty()){
        p1.pop();
    }
    
    cout<<"================================\n";
    cout<<"----------Pilha zerada---------\n";
    cout<<"================================\n";
    cout<<"Tamanho da pilha 1: "<< p1.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 2: "<< p2.size() <<endl;
    cout<<"--------------------------------\n";
    cout<<"Tamanho da pilha 3: "<< p3.size() <<endl;
    
    //Verificando se a pilha está vazia ou cheia.
    cout<<"================================\n";
    cout<<"--Pilha vazia ou com elementos--\n";
    cout<<"================================\n";
    /*
    //Se a pilha estiver vazia.
    if(p1.empty()){
        cout<<"Pilha vazia\n";
    } else {
        cout<<"Pilha com elementos\n";
    }
    cout<<"--------------------------------\n";
    if(p2.empty()){
        cout<<"Pilha vazia\n";
    } else {
        cout<<"Pilha com elementos\n";
    }
    cout<<"--------------------------------\n";
    if(p3.empty()){
        cout<<"Pilha vazia\n";
    } else {
        cout<<"Pilha com elementos\n";
    }*/
    
    return 0;
}


