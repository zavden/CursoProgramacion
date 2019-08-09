using System;
public class minimo
{
    public static void Main(String[] args)
    {
        double k1=0,k2;
        int nvar,i;
        Console.Write("Ingresa numero de variables a comparar: ");
        nvar=Convert.ToInt32(Console.ReadLine());
        for(i=1;i<=nvar;i++)
        {
            Console.Write("Ingresa el valor {0}: ",i);
            k2=Convert.ToInt32(Console.ReadLine());
            if(i==1||k1>=k2)
                k1=k2;
        }
        Console.Write("El menor es: {0:G}\n",k1);
    }
}