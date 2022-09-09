/*
2-Possua uma  função  subtrair  que  receba  3  parâmetros  e 
subtraia  os  2 primeiros parâmetros e some  o  resultado  desta 
subtração  com  o terceiro parâmetro.Exiba o resultado destas 
operações.
Obs: Todos os valores para as operações devem ser digitados pelo 
usuário(console).
*/

package atividade2;

import java.util.Scanner;

public class Atividade2 {
    public static void main(String[] args) {
        
        subtrair();
    }

    public static void subtrair(){
        Scanner sc= new Scanner(System.in);
        int n1;
        int n2;
        int n3;
        int sub;
        int soma;
        System.out.println("Digite o primeiro número: ");
        n1=sc.nextInt();

        System.out.println("Digite o primeiro número: ");
        n2=sc.nextInt();

        System.out.println("Digite o primeiro número: ");
        n3=sc.nextInt();

        sub=(n1-n2);
        soma=sub+n3;

        System.out.println("A subtração dos números " + n1 + " e " + n2 + " é: " + sub);
        System.out.println("E a soma da subtração com " + n3 + " é: " + soma);
    }
}
