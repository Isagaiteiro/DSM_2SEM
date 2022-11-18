package veiculos;

public class aviao extends aereo {

    private String piloto;

    public aviao(int rodas, int motor, String cor, String combustivel, int turbina, int altitude, String Piloto){
        super(rodas, motor, cor, combustivel, turbina, altitude);
        this.piloto=piloto;
    }

    public String getPiloto(){
        return piloto;
    }

    public void setPiloto(String piloto){
        this.piloto=piloto;
    }

    @Override
    public int getAltitude(){
        return super.getAltitude();
    }

    @Override
    public String getCombustivel(){
        return super.getCombustivel();
    }

    @Override
    public void mover(){
        System.out.println("O avião está se movendo, á "+ getAltitude() +"metros de altitude, usando o combustivel "+getCombustivel()+", sob o comando do piloto "+getPiloto());
    }
}
