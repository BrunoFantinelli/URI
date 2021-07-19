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
BigInteger x;
        BigInteger y = BigInteger.valueOf(1);
        
        Scanner entrada = new Scanner(System.in);
        
        while(true){
            x = entrada.nextBigInteger();
            if(x.signum() == -1){
                break;
            }
            if(x.signum() == 0){
                System.out.println(0);
            }else{
                System.out.println(x.subtract(y));
            }
        }
    }
 
}