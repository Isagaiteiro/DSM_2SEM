package veiculos;

public class carro extends terrestre {
    private String motorista; 

    public carro(int rodas, int motor, String cor, String combustivel, int kilometragem, int placa, int ano, String motorista){
        super(rodas, motor, cor, combustivel, kilometragem, placa, ano);
        this.motorista=motorista;
    
    }

    public String getMotorista(){
        return motorista;
    }

    public void setmotorista(String motorista){
        this.motorista=motorista;
    }

    @Override
    public int getKilometragem(){
        return super.getKilometragem();
    }

    @Override
    public String getCombustivel(){
        return super.getCombustivel();
    }

    @Override
    public void mover(){
        System.out.println("O carro está se movendo, á "+ getKilometragem() +"Km/hr, com combustivel "+getCombustivel()+", sob a direção do "+motorista);
    }
}

