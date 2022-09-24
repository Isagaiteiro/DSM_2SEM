package javaapplication7;

public class Veiculo {
    //Private não pode ser modificado por outras classes, só pode ser acessado por elas.
    private int motor;
    private int rodas;
    private String cor;
    
    //Método construtor
    public Veiculo(int motor, int rodas, String cor){
        this.motor=motor;
        this.rodas=rodas;
        this.cor=cor;
    }
    
    public int getMotor(){
        return motor;
    }
    
    public int getRodas(){
        return rodas;
    }
    
    public String getCor(){
        return cor;
    }
    
    public void setMotor(int motor){
        this.motor=motor;
    }
    
    public void setRodas(int rodas){
        this.rodas=rodas;
    }
    
    public void setCor(String cor){
        this.cor=cor;
    }
    
    public void imprimir(){
        System.out.println("Motor: "+motor);
        System.out.println("Rodas: "+rodas);
        System.out.println("Cor: "+cor);
    }
}


