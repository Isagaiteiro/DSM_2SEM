#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;

//Fazer   um   programaque   lê   um   conjunto   de   10   valores   inteiros   
//e   verificase algum dos valores é igual a média dos mesmos

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros[10];
    int x=1, soma, media;
    
    //Repetição para preenchimento do vetor
    for(int i=0; i<=9;i++){
        cout<<"Digite o "<< x << "º número:\n";
        cin>>numeros[i];
        x++;
    }
    cout<<"-----------------------\n";
    
    //Repetição para somar os valores do vetor
    for(int i=0; i<=9;i++){
        soma=soma + numeros[i];
        
    }
    
    //Cálculo da média
    media=soma/10;
    cout<<"A média da lista é: "<<media<<endl;
    cout<<"-----------------------\n";
    x=0;
    //Comparar os valores
    do{
        if(numeros[x]==media){
            cout<<"O valor "<<numeros[x]<<" é igual a média da lista.\n";
        } else {
           cout<<"O valor "<<numeros[x]<<" não é igual a média da lista.\n"; 
        }
        x++;
    }while (x<=9);
    
}
