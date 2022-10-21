/*Crie uma classe Animal que implemente os seguintes métodos e possua os seguintes atributos:
// AtributosInt patas;
// métodos: Mover(), Comer(), Imprimir() 
E crie mais 2 classes: Ave e Cachorro que reaproveitem (herdem) os métodos e atributos dos Animal e exiba as características de cada uma das classes como imprimir.*/
package reposicao;

public class Animal {
    private String nome;
    private int patas;

        public Animal(String nome,int patas){
            this.nome=nome;
            this.patas=patas;
        }
        
        public String getNome(){
            return nome;
        }

        public int getPatas(){
            return patas;
        }

        public void Mover(){
            System.out.println("Ele está em movimento...");
        }
        
        public void Comer(){
            System.out.println("Ele está comendo...");
        }

        public void Imprimir(){
            System.out.println("Nome: "+nome);
            System.out.println("Patas: "+patas);
        }

}