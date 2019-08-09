using System;
public class sigPrimo
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
    public static void Main(String[] args)
    {
        int j;
        Console.Write("Ingresa un numero: ");
        j=Convert.ToInt32(Console.ReadLine());
        j++;
        while(!primo(j))
            j++;
        Console.WriteLine("El siguiente primo es: {0}",j);
    }
}