/******************************************************************************

5)  Implemente  no  método  main(...),  um  programa  que  leia  20  números  de  um  vetor  
(tendo  valores  positivos, negativos, pares e ímpares). Crie três pilhas (P1, P2 e P3), 
estáticas de tamanho 20 e proceda, para cada um deles, como segue:

-se o número for par (seja positivo ou negativo), insira-o na pilha P1;
-se o número lido for ímpar(seja positivo ou negativo), insira na pilha P2;
-setiver valor positivo na pilha P2, retirar da pilha P2 e inserir na pilha P3;
-se tiver negativo na pilha P1, retirar da pilha P1 e inserir na pilha P3.-Ao final, imprima cada uma das pilhas P1, P2 e P3

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <locale>
#include <stack>



using namespace std;
int main (){
  setlocale (LC_ALL, "Portuguese");

    stack <int> pilha1;
    stack <int> pilha2;
    stack <int> pilha3;
    int comp, aux[20];

    for(int i=0; i<5; i++){
        cout << "Elemento " << i + 1 << ": " << endl;
        cin >> comp;
        cout << "--------------------------------\n";
        //se o número for par (seja positivo ou negativo), insira-o na pilha P1;
        if (comp % 2 == 0){
          pilha1.push(comp);
        } else { //se o número lido for ímpar(seja positivo ou negativo), insira na pilha P2;
          pilha2.push(comp);
        }
    }

    cout << pilha1.top() << endl;
    cout << pilha1.size() << endl;
    cout << pilha2.top() << endl;
    cout << pilha2.size() << endl;
    
    //desempilhando
    for(int i=0; i<5; i++){
        aux[i]=pilha2.top();
        pilha2.pop();
    }
    //-setiver valor positivo na pilha P2, retirar da pilha P2 e inserir na pilha P3;
    for(int i=0; i<5; i++){
        if(aux[i]>=0){
            pilha2.push(aux[i]);
        } else {
            pilha3.push(aux[i]);
        }
    }
  
    
  return 0;
}
