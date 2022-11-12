/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaexceptions;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author aluno.si
 */
public class JavaExceptions {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int x;
        String s;
        Scanner sc=new Scanner(System.in);
        
        //Bloco try
        //Lança um falha
        try{
            System.out.println("Digite um número: ");
            x = sc.nextInt();
            System.out.println("Digite uma letra: ");
            s = sc.next();
            //tanto faz o nome da variável do exception.
        } catch(InputMismatchException e) { //Tratar somente erros de input.
            //tratamento do erro e não encerra o programa.
            System.out.println("Mensagem de erro: "+e.getMessage());
            sc = null; //limpar a variável
            sc = new Scanner(System.in);//intacia o objeto novamente.
            System.out.println("Digite novamente: "); //Exibe a mensagem
            x = sc.nextInt(); //Pede o valor do usuário;
            
        } catch(NumberFormatException e){//Trata o valor que foi digitado incorretamente(Formato).
            System.out.println("Digitou o formato incorreto!!");
            
        } catch(ArithmeticException e){//Trata divisões (inteiras) por 0
            System.out.println("Você dividiu por 0.");
        }
        
        System.out.println("O programa ainda não encerrou");
    }
    
}
