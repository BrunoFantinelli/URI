import java.io.IOException;
import java.util.Scanner;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
Scanner entrada = new Scanner(System.in);
        String teste;
        int cont = 0;
        while(entrada.hasNext()){
            teste = entrada.nextLine();
            String resultado[] = teste.split("-");
            if(resultado[0].startsWith("c") || resultado[0].startsWith("C") || resultado[0].endsWith("c") || resultado[0].endsWith("C")){
                cont++;
            }
            if(resultado[1].startsWith("o") || resultado[1].startsWith("O") || resultado[1].endsWith("o") || resultado[1].endsWith("O")){
                cont++;
            }
            if(resultado[2].startsWith("b") || resultado[2].startsWith("B") || resultado[2].endsWith("b") || resultado[2].endsWith("B")){
                cont++;
            }
            if(resultado[3].startsWith("o") || resultado[3].startsWith("O") || resultado[3].endsWith("o") || resultado[3].endsWith("O")){
                cont++;
            }
            if(resultado[4].startsWith("l") || resultado[4].startsWith("L") || resultado[4].endsWith("l") || resultado[4].endsWith("L")){
                cont++;
            }
            if(cont == 5){
                System.out.println("GRACE HOPPER");
            }else{
                System.out.println("BUG");
            }
            cont = 0;
        }
 
    }
 
}