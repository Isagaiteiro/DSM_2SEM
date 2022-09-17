package javaapplication6;

import java.util.Scanner;

public class Revisao {
    
    private int x;
    private double d;
    private String s="s";
    
    //Condicionais.
    public void metodoIF(){
        if(x<0){
            System.out.println("Número negativo");
        } else {
            System.out.println("Número positivo");
        }
    }
    
    public void metodoIFElseIF(){
        if(x>0 && x<=10){
            System.out.println("X entre 0 e 10");
        } else if(x>10 && x<=20){
            System.out.println("X entre 11 e 20");
        } else {
            System.out.println("X maior que 20");
        }
    }
   
    public void metodoSwitch(){
        int opcao=0;
        
        switch(opcao){
            
            case 1:
                System.out.println("Caso 1");
                break;
                
            case 2:
                System.out.println("Caso 2");
                break;
               
            default:
                System.out.println("Fora das opcoes");
        }
    }
    
    public void metodoFor(){
        for(int i=0; i<3; i++){
            System.out.println("Valor de i:"+i);
        }
    }
    
    public void metodoWhile(){
        
        while(x<10){
            System.out.println("X: "+x);
            x++;
        }
    }
}
