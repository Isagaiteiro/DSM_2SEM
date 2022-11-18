package veiculos;

public class aquatico extends veiculo {
    

    private int botes; 
    private int cabines;

    public aquatico(int rodas, int motor, String cor, String combustivel, int botes, int cabines){
        super(rodas, motor, cor, combustivel);
        this.botes=botes;
        this.cabines=cabines;
    }
    
    public int getBotes(){
        return botes;
    }

    public int gerCabines(){
        return cabines;
    }


    public void setBotes(int botes){
        this.botes=botes;
    }

    public void setCabines(int cabines){
        this.cabines=cabines;
    }
}
