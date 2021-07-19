import java.io.IOException;
 import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
    Scanner scn = new Scanner(System.in);
    String x,y;
    List<String> array = new ArrayList<String>();
    x = scn.nextLine();
    y = scn.nextLine();
    array.add(x);
    array.add(y);
    Collections.sort(array);
    System.out.println(array.get(0));
    System.out.println(array.get(1));
 
    }
 
}