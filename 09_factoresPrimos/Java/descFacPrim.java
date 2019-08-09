import java.util.Scanner;
public class descFacPrim
{
    public static boolean primo(int k)
    {
        int i;
        for(i=2;i<k;i++)
        {
            if(k%i==0)
                return false;
        }
        return true;
    }
    public static int sigp(int k)
    {
        k++;
        while(!primo(k))
            k++;
        return k;
    }
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        int n,j;
        System.out.print("Ingresa un numero: ");
        n=leer.nextInt();
        if(primo(n))
            System.out.println("Es primo\n");
        else
        {
            j=2;
            do
            {
                while(n%j!=0)
                    j=sigp(j);
                System.out.print("("+j+")");
                n=n/j;
            }while(!primo(n));
            System.out.println("("+n+")");
        }
    }
}