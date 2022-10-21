/*Crie uma classe Animal que implemente os seguintes métodos e possua os seguintes atributos:
// AtributosInt patas;
// métodos: Mover(), Comer(), Imprimir() 
E crie mais 2 classes: Ave e Cachorro que reaproveitem (herdem) os métodos e atributos dos Animal e exiba as características de cada uma das classes como imprimir.*/
package reposicao;

public class Main {

    public static void main(String[] args) {
        Animal an;

        an=new Ave("Papagaio", 2);
        an.Mover();
        an.Comer();

        an=new Cachorro("Nik", 4);
        an.Mover();
        an.Comer();
    }

}
