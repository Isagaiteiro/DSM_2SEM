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
int respsim(string resposta);
int respnao(string resposta);

//Função principal.
int main(int argc, char** argv){
    setlocale(LC_ALL, "Portuguese");
    string resposta, resp2;
    
    //laço de repetição da função principal do programa.
    do{
        
    //Pergunta principal.
    cout<<"Olá, o seu dia foi bom?\n";
    cin>>resposta;
    
        
        //Chamando a função de resposta sim.
        if(resposta=="Sim" || resposta=="SIM" || resposta=="sim"){
            respsim(resposta);
        } 
        
        //Chamando a função de resposta não.
        if(resposta=="Não" || resposta=="NÃO" || resposta=="não"){
            respnao(resposta);
        } 
        
        //Pergunta final para dar inicio ao laço de repetição.
        cout<<"Deseja responder novamente?\n";
        cin>>resp2;
    //Condições do laço de repetição.
    }while(resp2=="Sim" || resp2=="SIM" || resp2=="sim");
    
    //Mensagem de finalização do programa.
    cout<<"Obrigado pro usar nosso programa.\n Tenha um ótimo dia!!";
    

    return 0;
}

//Função de resposta não.
int respnao(string resposta){
    
    //condição para retorno do resultado.
    if(resposta=="Não" || resposta=="NÃO" || resposta=="não"){
        cout<<"Espero que melhore!\n";
    } else {
        cout<<"Essa resposta não é valida!\n";
    }
    return 0;
}

//Função de resposta sim.
int respsim(string resposta){
    
    //condição para retorno do resultado.
    if(resposta=="Sim" || resposta=="SIM" || resposta=="sim"){
        cout<<"Que bom, deu tudo certo!\n";
    } else {
        cout<<"Essa resposta não é valida!\n";
    }
    return 1;
}