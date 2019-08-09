using System;
public class parImpar
{
    public static void Main(String[] args)
    {
        int num;
        Console.Write("Ingresa un numero: ");
        num=Convert.ToInt32(Console.ReadLine());
        if(num%2==0)
            Console.WriteLine("{0} es par",num);
        else
            Console.WriteLine("{0} es impar",num);
    }
}