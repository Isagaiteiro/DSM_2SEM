#include <iostream>
#include <locale>
#include "fila.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    elem elemento;
    Fila Fila1;
    bool erro;
    int opc, i=0;
    
    Create(&Fila1);

    do{
        cout<<"\n========================================\n";
        cout<<"-----------------Menu-------------------\n";
        cout<<"========================================\n";
        cout<<"1. Inserir na Fila.\n";
        cout<<"2. Retirar da Fila.\n";
        cout<<"3. Exibir Fila.\n";
        cout<<"4. Encerrar o programa\n";
        cout<<"========================================\n";
        cin>>opc;
        cout<<"========================================\n";
        
        switch(opc){
            case 1:
            	cout << "Elemento " << i+1 << ": "<< endl;
            	cin >> elemento;
            	Enter(&Fila1, &elemento, &erro);
            	i++;
            	if(erro==true){
            	    cout<<"A lista está cheia!!\n";
            	}
            break;
            
            case 2:
                elemento = Out(&Fila1, &erro);
                cout<<"O primeiro elemento foi retirado da fila!\n";
            break;
            
            case 3:
                cout<<"Elementos na fila: \n";
                Print(&Fila1);
            break;
            case 4:
                cout<<"O programa está sendo encerrado...\nObrigado!";
            break;
        }
    }while (opc>0 && opc<=3);
    cout<<"O programa está sendo encerrado...\nObrigado!";
    return 0;
}