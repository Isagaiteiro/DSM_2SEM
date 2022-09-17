/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package javaapplication6;

import java.util.Scanner;

public class StaticClass {
   
    
    public static void soma(double valor1, double valor2){
        System.out.println("Soma: "+(valor1 + valor2));
    }
    
    public static void divisao(double valor1, double valor2){
        
        System.out.println("Divisao: " + (valor1/valor2));
    }
    
    public static void potencia(double base, double expoente){
        //Chamando da biblioteca Math, o c�lculo de pot�ncia��o.
        double resultado=Math.pow(base, expoente);
        
        System.out.println("Potencia: "+resultado);
    }
    
    //Vai ser passado na classe principal pra receber os dados do usu�rio que ser�o usados nos outros m�todos.
    public static Scanner receberTeclado() {
        Scanner sc=new Scanner(System.in);
        
       return sc;
    }
}
