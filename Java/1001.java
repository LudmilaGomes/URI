import java.io.IOException;
import java.util.Scanner;

class Main 
{
    public static void main(String[] args) throws IOException 
    {
        int a, b;
        Scanner scan = new Scanner(System.in);

        a = scan.nextInt();
        b = scan.nextInt();
        int resultado = a + b;

        System.out.print("X = ");
        System.out.println(resultado);
    }
}