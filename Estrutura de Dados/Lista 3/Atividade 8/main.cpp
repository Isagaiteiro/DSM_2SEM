/******************************************************************************

8) Crie um programa que leia 9 valores inteiros do usuário. 
Esses valores devem ser variados, podendo ser repetidos. 

a)Use ponteiro para popular o vetor.
b)Ordene o vetor de forma crescente (use bubble sort)
c)Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
d)Exiba cada elemento do vetor e da matriz, usando ponteiro.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int *ptr1, numeros[9], maior, *ptr2, matriz[3][3], x=0;
    
    ptr1=&numeros[0];
    ptr2=&matriz[0][0];
    
    //a)Use ponteiro para popular o vetor.
    for(int i=0; i<9; i++){
        cout<<"Digite o "<<i+1<<"º número:\n";
        cin>>*(ptr1+i);
        
    }
    cout<<"--------------------------------------\n";
    
    //b)Ordene o vetor de forma crescente (use bubble sort)
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(*(ptr1+i) < *(ptr1+j)){
                maior=*(ptr1+j);
                *(ptr1+j)=*(ptr1+i);
                *(ptr1+i)=maior;
            }
        }
        
    }
    for(int i=0; i<9; i++){
        cout<<*(ptr1+i)<<endl;
       
    }
    cout<<"---------\n";
    //c)Crie uma matriz 3x3 e popule essa matriz com os valores do vetor, usando ponteiro.
    for(int j=0; j<3; j++){
        *((ptr2+j)+0)=*(ptr1+x);
        x++;
        *((ptr2+j)+1)=*(ptr1+x);
        x++;
        *((ptr2+j)+2)=*(ptr1+x);
        x++;
        //d)Exiba cada elemento do vetor e da matriz, usando ponteiro.
        cout<<*((ptr2+j)+0)<<"|"<<*((ptr2+j)+1)<<"|"<<*((ptr2+j)+2)<<endl;
        cout<<"---------\n";
    }


        
    
    
    
    return 0;
}



