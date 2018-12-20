package éumtriângulo;
/**
 * @author gmari
 */
import java.util.Scanner;
public class ÉUmTriângulo {
    public static void main(String[] args) {
        int a,b,c;
        Scanner leia = new Scanner(System.in);
        System.out.println("Digite o primeiro lado do suposto triângulo: ");
        a = leia.nextInt();
        System.out.println("Digite o segundo lado do suposto triângulo: ");
        b = leia.nextInt();
        System.out.println("Digite o terceiro lado do suposto triângulo: ");
        c = leia.nextInt();
        if(a > b+c || b > a+c || c > a+b){
            System.out.println("Não é um triângulo");
        }
        else{
            if(a == b && c != a && c != b || b == c && a != b && a != c || c == a && b != a && c != b){
                System.out.println("Triângulo isósceles");
            }
            else if(a != b && a != c && b != c){
                System.out.println("Triângulo escaleno");
            }
            else
                System.out.println("Triângulo equilátero");
            
        }
        
    }
    
}
