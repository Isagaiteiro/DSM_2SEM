package veiculos;

public class main{

    public static void main(String[] args, aviao name) {

        terrestre t;
        aviao aq;
        aereo ar;

        t=new carro(4, 1, "Vermelho", "Etanol", 20000, 12345, 2012, "João");

        t.mover();

        aq=new aviao(2, 4, "Banco", "QAV", 4, 12400, "Paulo");
        aq.mover();

        
    }
}
