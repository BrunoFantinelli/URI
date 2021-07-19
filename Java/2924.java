import java.io.IOException;
import java.math.BigInteger;
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
        BigInteger x = entrada.nextBigInteger();
        BigInteger y = entrada.nextBigInteger();
        BigInteger resultado;
        resultado = x;
        resultado = resultado.add(y);
        System.out.println(resultado);
 
    }
 
}