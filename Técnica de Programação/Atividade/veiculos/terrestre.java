package veiculos;

public class terrestre extends veiculo {
    
    private int kilometragem; 
    private int placa;
    private int ano;


    public terrestre(int rodas, int motor, String cor, String combustivel, int kilometragem, int placa, int ano){
        super(rodas, motor, cor, combustivel);
        this.kilometragem=kilometragem;
        this.placa=placa;
        this.ano=ano;
    }
    
    public int getKilometragem(){
        return kilometragem;
    }

    public int getPlaca(){
        return placa;
    }

    public int getAno(){
        return ano;
    }

   
}
