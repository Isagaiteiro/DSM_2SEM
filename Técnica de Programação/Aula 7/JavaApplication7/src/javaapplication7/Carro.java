package javaapplication7;

public class Carro extends Veiculo{
    //atributos 
    private int portas;
    private int airbag;
    
    //Método construtor
    public Carro(int motor, int rodas, String cor, int portas, int airbag){
        
        //Acessa o construtor da SUPERCLASSE (classe pai)
        //Atributos da classe Veiculo
        super(motor, rodas, cor); 
        
        //Atributos da classe Carro.
        this.portas=portas;
        this.airbag=airbag;
        
        
    }
    
    public void setPortas(int portas){
        this.portas=portas;
    }
    
    public void setAirbag(int airbag){
        this.airbag=airbag;
    }
    
    public int getPortas(){
        return portas;
    }
    
    public int getAirbag(){
        return airbag;
    }
    
    @Override
    public void imprimir(){
        System.out.println("Portas:"+portas);
        System.out.println("Airbag:"+airbag);
    }
}
