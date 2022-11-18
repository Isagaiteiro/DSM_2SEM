package veiculos;

public class navio extends aquatico {

    private String capitao;

    public navio(int rodas, int motor, String cor, String combustivel, int botes, int cabines, String capitao){
        super(rodas, motor, cor, combustivel, botes, cabines);
        this.capitao=capitao;
    }

    public String getCapitao(){
        return capitao;
    }

    public void setCapitao(String capitao){
        this.capitao=capitao;
    }
}
