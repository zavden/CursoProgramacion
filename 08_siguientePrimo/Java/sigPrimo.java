import java.util.Scanner;
public class sigPrimo
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
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        int j;
        System.out.print("Ingresa un numero: ");
        j=leer.nextInt();
        j++;
        while(!primo(j))
            j++;
        System.out.println("El siguiente primo es: "+j);
    }
}