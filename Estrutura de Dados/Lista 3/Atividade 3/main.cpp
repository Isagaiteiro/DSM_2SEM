/******************************************************************************

Examine o seguinte código:

int arr[5] = { 10, 80, 40, 30, 20 };
int *parr = &arr[4];
int inx = 0;
inx = *parr++;

a) O código compila?
-Sim
b) Após executar o código, qual será o valor de inx?
-Ele irá  retornar o valor 20, correspondendo ao valo da última casa do vetor.
c) Após executar o código, para onde parr estará apontando?
- *parr, está apontando para o endereço do quinto indice do vetor arr.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int arr[5] = { 10, 80, 40, 30, 20 };
    int *parr = &arr[4];
    int inx = 0;
    inx = *parr++;

    cout<<inx;
    return 0;
}
