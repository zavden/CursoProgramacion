import java.util.Scanner;
public class parImpar
{
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        int num;
        System.out.print("Ingresa un numero: ");
        num=leer.nextInt();
        if(num%2==0)
            System.out.println(num+" es par");
        else
            System.out.println(num+" es impar");
    }
}