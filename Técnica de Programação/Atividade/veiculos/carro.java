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
}
