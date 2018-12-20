package partesdeumnúmero;
/* @author gmari */
import java.util.Scanner;
public class PartesDeUmNúmero {
    public static void main(String[] args) {
        int numinteiro, arredondamento;
        float num, fracao;
        Scanner leia = new Scanner(System.in);
        System.out.println("Digite um número real: ");
        num = leia.nextFloat();
        numinteiro = (int) num;
        fracao = num - numinteiro;
        arredondamento = Math.round(num);
        System.out.println("A parte inteira do número: " + numinteiro);
        System.out.println("A parte fracionária do número: " + fracao);
        System.out.println("O número arredondado: " + arredondamento);
    }
}
