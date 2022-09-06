/******************************************************************************

O que aparecerá quando executarmos o programa abaixo?

int count = 30, *temp, sum = 2;
temp = &count;*temp = 20;
temp = &sum;*temp = count;

Cout <<  “ count = ”count << “*temp = ” *temp << “sum = ” sum;

- Exibiu mensagem de fatal error, pois a estrutura do cout estava incorreta.
- Após reorganizar a estrutura, foi possível compilar o programa e notar que através do ponteiro temp
 foi atribuido o valor 20 para a variável count, que armzenou o valor e novamente o ponteiro temp
 foi usado para armazenar o valor do count e atriuir a variável sum, dessa forma todos os resultados são o número 20.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int count = 30, *temp, sum = 2;
    temp = &count;
    *temp = 20;
    temp = &sum;
    *temp = count;

    cout <<  " count = " << count << "*temp = "  << *temp << "sum = " << sum;

    return 0;
}