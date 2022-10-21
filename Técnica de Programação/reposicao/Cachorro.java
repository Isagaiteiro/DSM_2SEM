/*Crie uma classe Animal que implemente os seguintes métodos e possua os seguintes atributos:
// AtributosInt patas;
// métodos: Mover(), Comer(), Imprimir() 
E crie mais 2 classes: Ave e Cachorro que reaproveitem (herdem) os métodos e atributos dos Animal e exiba as características de cada uma das classes como imprimir.*/

package reposicao;

public class Cachorro extends Animal{
    public Cachorro(String nome, int patas){
        super(nome,patas);
    }

    @Override
    public void Mover(){
        System.out.println("O cachorro " + getNome() + " tem " + getPatas() + " patas e está andando até a ração...");
    }

    @Override
    public String getNome(){
        return super.getNome();
    }

    @Override
    public int getPatas(){
        return super.getPatas();
    }
}