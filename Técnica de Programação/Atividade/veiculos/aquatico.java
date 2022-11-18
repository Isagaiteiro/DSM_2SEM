package veiculos;

public class aquatico extends veiculo {
    

    private int botes; 
    private int nos;

    public aquatico(int rodas, int motor, String cor, String combustivel, int botes, int nos){
        super(rodas, motor, cor, combustivel);
        this.botes=botes;
        this.nos=nos;
    }
    
    public int getBotes(){
        return botes;
    }

    public int gerNos(){
        return nos;
    }

    public void setBotes(int botes){
        this.botes=botes;
    }

    public void setNos(int nos){
        this.nos=nos;
    }
}
