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
 
        Scanner s = new Scanner( System.in );
        int x = s.nextInt();
        System.out.print("Ent");
        for(int i = 0; i < x; i++){
            System.out.print("a");
        }
        System.out.print("o eh N");
        for(int i = 0; i < x; i++){
            System.out.print("a");
        }
        System.out.print("t");
        for(int i = 0; i < x; i++){
            System.out.print("a");
        }
        System.out.println("l!");
    }
 
}