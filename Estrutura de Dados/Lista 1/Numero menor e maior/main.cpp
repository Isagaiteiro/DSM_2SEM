#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

//Crie um programa que popule um vetor de 10 valores float, passados pelo 
//usuário.Dentro de uma função, sem ordenar, procure pelo maior e menor valor 
//e exiba-os na tela.A função deve receber esse vetor e retornar o maior e 
//menor valor para serem exibidos na tela.

int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    float numeros[10], menor=100, maior=0;
    
    cout<<"================================\n";
    
    //Repetição para preencher o array com float.
    for(int i=0; i<=9; i++){
        cout<<"Digite a "<<i+1<<" nota do aluno.\n";
        cin>>numeros[i];
    }
    cout<<"================================\n";

    //Repetição para imprimir todas as notas do array.
    cout<<"O aluno obteve as seguintes notas: \n";
    for(int i=0; i<=9; i++){
        cout<<numeros[i]<<endl;
    }
    
    //Repetição para verificar qual é a menor nota do array.
    for(int i=0; i<=9; i++){
        if(numeros[i]<menor){
            menor=numeros[i];
        }
    }
    cout<<"================================\n";
    cout<<"A menor nota do aluno é "<<menor<<endl;
    
    //Repetição para verificar qual é a maior nota do array.
    for(int i=0; i<=9; i++){
        if(numeros[i]>maior){
            maior=numeros[i];
        }
    }
    cout<<"================================\n";
    cout<<"A maior nota do aluno é "<<maior<<endl;
    cout<<"================================\n";
    

    return 0;
}
