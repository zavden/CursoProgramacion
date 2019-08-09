import java.util.Scanner;
public class tablasMultiplicar
{
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        int i,j;
        System.out.print("Ingresa el numero de la tabla que deseas conocer: ");
        j=leer.nextInt();
        for(i=1;i<=10;i++)
        {
            System.out.println(j+" x "+i+" = "+i*j);
        }
    }
}