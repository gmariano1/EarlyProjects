// Fig. 16.6: SubString06.java                                
// String class substring methods.
import java.util.Arrays;
import java.util.Scanner;
public class SubString06 {

    public static void main(String[] args) {
        try {
            String letters = "abcdefghijklmabcdefghijklma";
            // test substring methods
            System.out.printf("Substring from index 20 to end is \"%s\"\n", letters.substring(20));
            System.out.printf("%s \"%s\"\n", "Substring do index 3 até index antes do 6", letters.substring(3, 6));
            Scanner leia = new Scanner(System.in);
            System.out.println("Digite seu nome");
            String nome = leia.nextLine();
            String[] primeiroNome = nome.split(" ");
            System.out.println("" + primeiroNome[0].substring(0,1).toUpperCase() + primeiroNome[0].substring(1,primeiroNome[0].length()));
            System.out.println("" + nome);
            String palavra = "fufufufufu";
            System.out.println("" + palavra.substring(0,2));
            System.out.println("No index: " + nome.indexOf('g'));
            System.out.println("" + nome.replace('u','w'));
        } catch (Exception except) {
            System.out.println("" + except);
        }
    }                                                                                // end main                      
}  
/*     ALTERAÇÕES:                                             (   alteracoes-cap16Fig06.doc   )
a. Inclua um try ... catch neste código. Comece usando a exceção Exception.
b. Como podemos forçar uma exceção neste método main.
c. Toque a exceção Exception pela nome da exceção mostrada na mensagem de erro.
d. Crie a String nomePessoa = "Carlos Pereira".  Armazene na String primeiroNome somente
    o primeiro nome da variável nomePessoa ("Carlos").
    Não transforme a String em vetor de caracteres.
e. Leia o nome completo de qualquer pessoa com duas ou mais palavras e armazene na variável
    nomeCompleto. Separe somente o seu primeiro nome e armazene na String primeiroNome.
f. Refaça o item anterior sem usar estrutura de repetição.

*/
