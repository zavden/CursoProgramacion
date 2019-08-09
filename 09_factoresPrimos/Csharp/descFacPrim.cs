using System;
public class descFacPrim
{
    public static bool primo(int k)
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
    public static void Main(String[] args)
    {
        int n,j;
        Console.Write("Ingresa un numero: ");
        n=Convert.ToInt32(Console.ReadLine());
        if(primo(n))
            Console.Write("Es primo\n");
        else
        {
            j=2;
            do
            {
                while(n%j!=0)
                    j=sigp(j);
                Console.Write("({0})",j);
                n=n/j;
            }while(!primo(n));
            Console.Write("({0})\n",n);
        }
    }
}