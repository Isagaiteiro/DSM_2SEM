import java.util.Scanner;

//import java.lang.Math.sqrt();
/*
Escreva um programa em linguagem Java que: 
1) Entrar com um número e imprimi-lo caso seja maior que 20.
2) leia dois valores numéricos inteiros e efetue a adição. Caso o resultado seja maior que 
10, apresentá-lo.
3) Entrar com um número e imprimir a raiz quadrada do número caso ele seja positivo e o 
quadrado do número caso ele seja negativo.
4) Entrar com um número e imprimir uma das mensagens: é múltiplo de 3 ou não é 
múltiplo de 3.
5) Entrar com um número e informar se ele é divisível por 3 e por 7.
6) Entrar comum número e informar se ele é divisível por 10, por 5, por 2 ou se não é
divisível por nenhum destes
 */

public class Atividade1 {
    public static void main(String[] args) {
        System.out.println("Hello Word!!!!!!!");

        int n1, n2, n3, n4, n5, n6, soma;
        double div, div1, div2, div3, div4, div5;
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite um número: ");
        n1 = sc.nextInt();

        // 1) Entrar com um número e imprimi-lo caso seja maior que 20.
        if (n1 > 20) {
            System.out.println("O número " + n1 + " é maior que 20.");
        }

        // 2) leia dois valores numéricos inteiros e efetue a adição. Caso o resultado
        // seja maior que 10, apresentá-lo.
        System.out.println("Digite um segundo número: ");
        n2 = sc.nextInt();
        soma = n1 + n2;
        if (soma > 10) {
            System.out.println("A soma dos números " + n1 + " e " + n2 + " é " + soma);
        }

        // 3) Entrar com um número e imprimir a raiz quadrada do número caso ele seja
        // positivo e o quadrado do número caso ele seja negativo.
        System.out.println("Digite o terceiro número: ");
        n3 = sc.nextInt();

        if (n3 >= 0) {
            System.out.println("A raiz quadrada de " + n3 + " é " + Math.sqrt(n3));
        } else if (n3 < 0) {
            System.out.println("O quadrado de " + n3 + " é " + n3 * n3);
        }

        // 4) Entrar com um número e imprimir uma das mensagens: é múltiplo de 3 ou não
        // é múltiplo de 3.
        System.out.println("Digite o quarto número: ");
        n4 = sc.nextInt();
        div = n4 % 3;
        if (div == 0) {
            System.out.println("Ele é multiplo por 3!");
        } else {
            System.out.println("Ele não é multiplo por 3!");
        }
        // 5) Entrar com um número e informar se ele é divisível por 3 e por 7.
        System.out.println("Digite o quinto número: ");
        n5 = sc.nextInt();
        div1 = n5 % 3;
        div2 = n5 % 7;
        if (div1 == 0 && div2 == 0) {
            System.out.println("Ele é multiplo por 3 e 7!");
        } else {
            System.out.println("Ele não é multiplo por 3 e 7!");
        }

        // 6) Entrar comum número e informar se ele é divisível por 10, por 5, por 2 ou
        // se não é divisível por nenhum destes.
        System.out.println("Digite o sexto número: ");
        n6 = sc.nextInt();
        div3 = n6 % 10;
        div4 = n6 % 5;
        div5 = n6 % 2;
        if (div3 == 0 && div4 == 0 && div5 == 0) {
            System.out.println("Ele é multiplo por 10, 5 e 2!");
        } else {
            System.out.println("Ele não é multiplo por 10, 5 e 2!");
        }
    }
}
