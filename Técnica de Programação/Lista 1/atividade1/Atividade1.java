/* 
1 -Possua uma função somar que receba 2 parâmetros e exiba o 
resultado da soma.
Obs: Todos os valores para as operações devem ser digitados pelo 
usuário(console).
*/

package atividade1;

import java.util.Scanner;

public class Atividade1 {
    public static void main(String[] args) {
        somar();
        
    }

    public static void somar(){
        Scanner sc= new Scanner(System.in);
        int n1;
        int n2;
        int soma;
        System.out.println("Digite o primeiro número: ");
        n1=sc.nextInt();

        System.out.println("Digite o primeiro número: ");
        n2=sc.nextInt();

        soma=n1+n2;

        System.out.println("A soma dos números " + n1 + " e " + n2 + " é: " + soma);
    }
}
