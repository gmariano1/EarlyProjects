package maiorempresa;
/* @author gmari */
import java.util.Scanner;
public class MaiorEmpresa {
    public static void main(String[] args) {
        int quantidade, maior = 0;
        String cnpj, cnpjMaior = "";
        Scanner leia = new Scanner(System.in);
        System.out.println("Digite o cnpj da empresa: ");
        cnpj = leia.nextLine();
        System.out.println("Digite a quantidade de funcionários: ");
        quantidade = leia.nextInt();
        while(quantidade > 0){
            System.out.println("Digite o cnpj da empresa: ");
            cnpj = leia.nextLine();
            System.out.println("Digite a quantidade de funcionários: ");
            quantidade = leia.nextInt();
            if(quantidade > maior){
                maior = quantidade;
                cnpjMaior = cnpj;
            }
        }
        System.out.println("O CNPJ da empresa é " + cnpj + " e a quantidade de funcionários é " + maior);
    }
}
