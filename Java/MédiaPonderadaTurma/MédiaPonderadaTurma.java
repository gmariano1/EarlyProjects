package médiaponderadaturma;
/* @author gmari */
import java.util.Scanner;
public class MédiaPonderadaTurma {
    public static void main(String[] args) {
        float nota1, nota2, media;
        int alunos = 0, aprovado = 0, reprovado = 0;
        Scanner leia = new Scanner(System.in);
        while(alunos < 5){
            System.out.println("Digite a primeira nota: ");
            nota1 = leia.nextFloat();
            System.out.println("Digite a segunda nota: ");
            nota2 = leia.nextFloat();
            media = (nota1+(2*nota2))/3;
            if (media >= 5){
                System.out.println("O aluno foi aprovado com média: " + media);
                aprovado++;
            }
            else{
                System.out.println("O aluno foi reprovado com média: " + media);
                reprovado++;
            }
            alunos++;
        }
        System.out.println(aprovado + " alunos foram aprovados.");
        System.out.println(reprovado + " alunos foram reprovados.");
    }
    
}
