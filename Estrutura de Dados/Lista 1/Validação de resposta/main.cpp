#include <iostream>
#include <locale>
#include <cstdlib>

using namespace std;

//Fazer   uma   rotina   que   aguarda   um   string   do   teclado   
//e   retorna   o   valor   1   se astring  digitada foi  "SIM"  
//e  0  se astring  digitado  foi  "NAO".  A  rotina/ufnção só  deve retornar 
//alguma  coisa se astring digitado for "SIM" ou "NAO".
//Faça a verificação para que o usuário não estrague o seu código.

//Cabeçalho
int resp(string resposta);

//Função principal.
int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    string resposta;
        
    //Pergunta principal.
    cout<<"Digite Sim ou Não: \n";
    cin>>resposta;
    
    //Chamando a função para mostrar a resposta.
    cout<<resp(resposta);

    return 0;
}

//Função de resposta.
int resp(string resposta){
    
    //condição para retorno.
    if(resposta=="Não" || resposta=="NÃO" || resposta=="não"){
        return 0;
    }
    if(resposta=="Sim" || resposta=="SIM" || resposta=="sim"){
        return 1;
    }
}
