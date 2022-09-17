/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication6;

import java.util.Scanner;


public class JavaApplication6 {

    
    public static void main(String[] args) {
        
        Scanner sc;
        double valor1, valor2;
        sc = StaticClass.receberTeclado();
        
    
        System.out.println("Digite um valor:");
        valor1 = sc.nextDouble();
        System.out.println("Digite um valor:");
        valor2 = sc.nextDouble();
        
        StaticClass.soma(valor1, valor2);
        StaticClass.divisao(valor1, valor2);
        StaticClass.potencia(valor1, valor2);
        
    }
    
    
    
}
