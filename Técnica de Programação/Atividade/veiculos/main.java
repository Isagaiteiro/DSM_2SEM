package veiculos;

public class main{

    public static void main(String[] args) {

        terrestre t;
        aereo ae;
        aquatico aq;

        t=new carro(4, 1, "Vermelho", "Etanol", 20000, 12345, 2012, "João");

        t.mover();

        ae=new aviao(2, 4, "Banco", "QAV", 4, 12400, "Antonio");

        ae.mover();

        aq=new navio(0,1,"Cinza", "bunker oil", 3, 2000, "Ricardo" );
        
        aq.mover();
    }
}
