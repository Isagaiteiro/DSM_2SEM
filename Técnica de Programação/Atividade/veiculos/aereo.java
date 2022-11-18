package veiculos;

public class aereo extends veiculo {
    private int turbina;
    private int altitude;
    
    public aereo(int rodas, int motor, String cor, String combustivel, int turbina, int altitude){
        super(rodas, motor, cor, combustivel);
        this.turbina=turbina;
        this.altitude=altitude;
    }

    public int getTurbina(){
        return turbina;
    }

    public int getAltitude(){
        return altitude;
    }
    
    public void setTurbina(int turbina){
        this.turbina=turbina;
    }

    public void setAltitude(int altitude){
        this.altitude=altitude;
    }
}
