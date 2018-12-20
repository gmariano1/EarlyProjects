package listadearray;
import java.util.ArrayList;
import java.util.Scanner;
/* @author gmari */
public class ListaDeArray {
    public static void main(String[] args) {
        ArrayList <String> nomes = new ArrayList();
        Scanner leia = new Scanner(System.in);
        int [] quantidade = new int[3];
        boolean num = false;
        int cont = 0;
        String nome;
        for(int i = 0; i < quantidade.length; i++){
            System.out.println("Digite o nome da pessoa");
            nome = leia.nextLine();
            nomes.add(nome);
            
        }
        while(num != true){
            System.out.println("Digite o nome da pessoa");
            nome = leia.nextLine();
            nomes.add(nome);
            cont++;
            if(cont == 5) num = true;
        }
        if(nomes.contains("Girlane")){
            nomes.remove("Girlane");
        }
        for(int i = 0; i < nomes.size(); i++){
            System.out.printf("O nome da pessoa %d é %s\n", i+1, nomes.get(i));
        }
    }
    
}
