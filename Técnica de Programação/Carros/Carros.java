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
    
    //métodos (getters e setters)
    //get- Não pode ser void.
    public int getRodas(){
        return rodas;
    }
    public int getPortas(){
        return portas;
    }
    
    public String getPlaca(){
        return placa;
    }
    
    public String getCor(){
        return cor;
    }
    
    //set- Tem que ser void
    //Método para alterar a quantidade de portas
    public void setPortas(int portas){
        this.portas = portas;
    }
    
    public void setRodas(int rodas){
        this.rodas = rodas;
    }
    
    public void setPlaca(String placa){
        this.placa = placa;
    }
    
    public void setCor(String cor){
        this.cor = cor;
    }
            
    //imprimir
    public void imprimir(){
        System.out.println("Portas: "+portas);
        System.out.println("Rodas: "+rodas);
        System.out.println("Cor: "+cor);
        System.out.println("Placa: "+placa);
    }
    
   //Chamando o objeto na classe main.    
   //Objeto é uma variável de referência, ou seja, ele é tipo um ponteiro.
   public static void main(String[] args) {
       
       //Instanciar um objeto do tipo carro
       Carros carros1 = new Carros(); 
       int portasLocal;
       
       //Receber a quantidade de portas do veículo.
       portasLocal = carros1.getPortas(); //4
       portasLocal = portasLocal + 1; //5
       System.out.println("portasLocal: "+ portasLocal);
       
       System.out.println("Portas do carro: "+carros1.getPortas());
      
       //System.out.println("Características do carro 1");
       //usa o objeto e chama a função.
       //carros1.imprimir();
       
       //Instanciando um novo objeto
       //Carros carros2 = new Carros();
       //System.out.println("Características do carro 2");
       //carros2.imprimir();
   }

    
}
