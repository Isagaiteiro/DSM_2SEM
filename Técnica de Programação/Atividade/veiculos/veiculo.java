package veiculos;


public class veiculo {
    private int rodas;
    private int motor;
    private String cor;
    private String combustivel;
    
    public veiculo(int rodas, int motor, String cor, String combustivel){
        this.rodas=rodas;
        this.motor=motor;
        this.cor=cor;
        this.combustivel=combustivel;
    }

    public int getRodas(){
        return rodas;
    }

    public int getMotor(){
        return motor;
    }

    public String getCor(){
        return cor; 
    }

    public String getCombustivel(){
        return combustivel;
    }

    public void setRodas(int rodas){
        this.rodas=rodas;
    }

    public void setMotor(int motor){
        this.motor=motor;
    }

    public void setCor(String cor){
        this.cor=cor;
    }

    public void setCombustivel(String combustivel){
        this.combustivel=combustivel;
    }
    

    public void mover(){
        System.out.println("O veículo está em movimento");
    }

    public void abastecer(){
        System.out.println("O veículo está abastecido");
    }

    public void imprimir(){
        System.out.println("Rodas: "+rodas);
        System.out.println("Motor: "+motor);
        System.out.println("Cor: "+cor);
        System.out.println("Combustivel: "+combustivel);
    } 
}
