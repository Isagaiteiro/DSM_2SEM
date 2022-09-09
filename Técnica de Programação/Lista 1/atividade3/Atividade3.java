/*
3 –Possua uma função multiplicar que receba 2 parâmetros faça 
a multiplicação destes parâmetros e retorne o valor para a função 
principal, na qual irá exibir o resultado.
Obs: Todos os valores para as operações devem ser digitados pelo 
usuário(console).
*/

package atividade3;

import java.util.Scanner;

public class Atividade3 {
    public static void main(String[] args) {
        multiplicar();
    }

    public static void multiplicar(){
        Scanner sc= new Scanner(System.in);
        int n1;
        int n2;
        int mult;
        System.out.println("Digite o primeiro número: ");
        n1=sc.nextInt();

        System.out.println("Digite o primeiro número: ");
        n2=sc.nextInt();

        mult=n1*n2;

        System.out.println("A multiplicação dos números " + n1 + " e " + n2 + " é: " + mult);
    }
}
