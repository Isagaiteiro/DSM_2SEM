/******************************************************************************

10) Crie um programa que leia do teclado uma sequência de 10 números decimais e 
um número que deseja buscar.Armazene em um vetor. Depois disso, ordene os números 
de forma crescente. Por último, exiba o vetor e se o número buscado foi encontrado 
ou não. Faça todo o exercício usando somente ponteiros.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float *num, numeros[5], maior, pesq, controle;
    
    num=&numeros[0];
    
    
    for(int i=0; i<5; i++){
        cout<<"Digite o "<<i+1<<"º número decimal:\n";
        cin>>*(num+i);
        
    }
    cout<<"--------------------------------------\n";
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(*(num+i) < *(num+j)){
                maior=*(num+j);
                *(num+j)=*(num+i);
                *(num+i)=maior;
            }
        }
        
    }
    for(int i=0; i<5; i++){
        cout<<*(num+i)<<endl;
       
    }
    
    cout<<"Digite o número que deseja encontrar: \n";
    cin>>pesq;
    
    for(int i=0; i<5; i++){
        if(*(num+i)==pesq){
            cout<<"Esse número está na lista!\n";
            controle=0;
        } else {
            controle=1;
        }
         
    }
    if(controle==1){
        cout<<"Esse número não está na lista!\n"; 
    }
    return 0;
}
