import java.util.Scanner;
public class minimo
{
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        float k1=0,k2;
        int nvar,i;
        System.out.print("Ingresa numero de variables a comparar: ");
        nvar=leer.nextInt();
        for(i=1;i<=nvar;i++)
        {
            System.out.printf("Ingresa el valor %d: ",i);
            k2=leer.nextInt();
            if(i==1||k1>=k2)
                k1=k2;
        }
        System.out.print("El menor es: "+k1+"\n");
    }
}