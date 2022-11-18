package veiculos;

public class navio extends aquatico {

    private String capitao;

    public navio(int rodas, int motor, String cor, String combustivel, int botes, int nos, String capitao){
        super(rodas, motor, cor, combustivel, botes, nos);
        this.capitao=capitao;
    }

    public String getCapitao(){
        return capitao;
    }

    public void setCapitao(String capitao){
        this.capitao=capitao;
    }

    @Override
    public String getCombustivel(){
        return super.getCombustivel();
    }
    
    @Override
    public int getNos(){
        return super.gerNos();
    }

    @Override
    public void mover(){
        System.out.println("O navio está se movendo, á "+ getNos() +"nós, com combustivel "+getCombustivel()+", sob o comando do "+capitao);
    }
}
