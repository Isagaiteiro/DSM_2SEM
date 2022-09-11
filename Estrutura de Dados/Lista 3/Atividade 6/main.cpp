/******************************************************************************

 A  Microsoft  está  contratando  funcionários  para  realizarem  testes  no  gerenciador  
 de  memória  do  seu  novo computador. Seu programa deverá ler 5números inteiros, 
 5números decimais, 5letras, armazená-las em uma única struct contendo vetor de inteiro, 
 vetor de decimais e vetor de char.Então, através de ponteiros, trocar os seus valores, 
 substituindo todos os números inteiros pelo número 100, os decimais por 1.99, e as letras por ’W’. 
 Depois da substituição, o programa deverá exibir o valor das variáveis já devidamente atualizadas.

*******************************************************************************/
#include <iostream>

using namespace std;

struct dados{
    int numeros[5];
    float decimais[5];
    char letras[5];
};

int main()
{
    struct dados d;
    int *ptr1;
    float *ptr2;
    char *ptr3;
    
    ptr1=&d.numeros[0];
    ptr2=&d.decimais[0];
    ptr3=&d.letras[0];
    
    for(int i=0; i<5; i++){
        cout<<"Digite o "<<i+1<<" º número inteiro:\n";
        cin>>d.numeros[i];
        
        cout<<"Digite o "<<i+1<<" º número decimal:\n";
        cin>>d.decimais[i];
        
        cout<<"Digite a "<<i+1<<" º letra:\n";
        cin>>d.letras[i];
        
    }
    cout<<"-----------------------\n";
    cout<<"Imprimindo a lista normal: \n";
    for(int i=0; i<5; i++){
      cout<< d.numeros[i]<< endl;
      cout<< d.decimais[i]<< endl;
      cout<< d.letras[i]<< endl;
    }
    cout<<"-----------------------\n";
    
    for(int i=0; i<5; i++){
        *(ptr1+i)=100;
        *(ptr2+i)=1.99;
        *(ptr3+i)='W';
    }
    cout<<"Imprimindo os valores atualizados: \n";
    for(int i=0; i<5; i++){
      cout<< d.numeros[i]<< endl;
      cout<< d.decimais[i]<< endl;
      cout<< d.letras[i]<< endl;
    }
    cout<<"-----------------------\n";
    

    return 0;
}
