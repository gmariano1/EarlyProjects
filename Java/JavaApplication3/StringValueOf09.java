// Fig. 16.9: StringValueOf09.java          
// String valueOf methods.

import java.util.Scanner;

public class StringValueOf09 {

    public static void main(String[] args) {
        char[] charArray = {'a', 'b', 'c', 'd', 'e', 'f'};
        boolean booleanValue = true;
        char characterValue = 'Z';
        int integerValue = 7;
        long longValue = 10000000000L;             // L suffix indicates long
        float floatValue = 2.5f;                               // f indicates that 2.5 is a float
        double doubleValue = 33.333;                 // no suffix, double is default
        Object objectRef = "hello";                     // assign string to an Object reference
        System.out.printf("char array = %s\n", String.valueOf(charArray));
        System.out.printf("part of char array = %s\n", String.valueOf(charArray, 3, 3));
        System.out.printf("boolean = %s\n", String.valueOf(booleanValue));
        System.out.printf("char = %s\n", String.valueOf(characterValue));
        System.out.printf("int = %s\n", String.valueOf(integerValue));
        System.out.printf("long = %s\n", String.valueOf(longValue));
        System.out.printf("float = %s\n", String.valueOf(floatValue));
        System.out.printf("double = %s\n", String.valueOf(doubleValue));
        System.out.printf("Object = %s\n", String.valueOf(objectRef));
        Scanner leia = new Scanner(System.in);
        System.out.println("Digite uma palavra: ");
        String palavra = leia.nextLine();
        System.out.println("" + palavra);
        System.out.printf("Palavra = %s\n", String.valueOf(palavra));
        char inicio;
        inicio = palavra.charAt(0);
        System.out.printf("Palavra = %s\n", Character.toTitleCase(inicio));

    }
}     /*     ALTERAÇÕES:                        (   alteracoes-cap16Fig09.doc   )
a. Leia uma palavra do usuário e mostre a palavra original e a depois mostre a palavra com este 
    formato: a primeira letra da palavra maiúscula e as outras letras minúsculas.  
    Não use o método substring para tratar o primeiro caractere, o caractere da posição zero.
    Use o método valueOf pelo menos uma vez.
b. Refaça o item anterior sem usar o método subtring em nenhuma parte da solução.
    Use o método valueOf pelo menos uma vez.

*/
