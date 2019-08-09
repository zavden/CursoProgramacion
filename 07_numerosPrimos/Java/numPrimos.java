import java.util.Scanner;
public class numPrimos
{
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        int n,i;
        boolean comp=false;
        System.out.print("Ingresa un numero: ");
        n=leer.nextInt();
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                comp=true;
                System.out.print("No es primo\n");
                break;
            }
        }
        if(!comp)
            System.out.print("Es primo\n");
    }
}