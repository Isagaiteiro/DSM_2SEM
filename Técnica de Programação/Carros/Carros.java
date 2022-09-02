/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package carros;

/**
 *
 * @author aluno.si
 */
public class Carros {

    //Atributos (Características)
    //Variáveis declaradas na Classe, são globais.
    private int rodas=4;
    private int portas=4;
    private String placa="ABC1234";
    private String cor="Prata";
    private boolean gasolina = true;
    
    //métodos
    
    //imprimir
    public void imprimir(){
        System.out.println("Portas: "+portas);
        System.out.println("Rodas: "+rodas);
        System.out.println("Cor: "+cor);
        System.out.println("Placa: "+placa);
    }
            
   public static void main(String[] args) {
       
   }
    
}
