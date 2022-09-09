/*
4 –Possua uma função dividir que receba 2 parâmetros e faça a 
divisão destes 2 parâmetros e   retorne   o   resultado   da   
divisão (se existir). Caso o divisor seja zero (0), exiba a 
mensagem “não é possível dividir por 0”.
Obs: Todos os valores para as operações devem ser digitados pelo 
usuário(console).
*/

package atividade4;

import java.util.Scanner;

public class Atividade4 {
    public static void main(String[] args) {
        
        dividir();
    }

    public static void dividir(){
        Scanner sc= new Scanner(System.in);
        int n1;
        int n2;
        float div;
        System.out.println("Digite o primeiro número: ");
        n1=sc.nextInt();

        System.out.println("Digite o primeiro número: ");
        n2=sc.nextInt();

        div=(float) n1/n2;

        System.out.println("A divisão dos números " + n1 + " e " + n2 + " é: " + div);
    }
}
