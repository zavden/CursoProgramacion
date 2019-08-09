using System;
public class menuOperEI
{
    public static void Main(String[] args)
    {
        double num1,num2,res;
        char op;
        Console.Write("Elije una opcion:\na) Suma.\nb) Resta.\nc) Multiplicacion.\nd) Division.\n Opcion: ");
        op = Convert.ToChar(Console.ReadLine());
        if(op=='a')
        {
            Console.Write("Escribe primer sumando: ");
            num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Escribe el segundo sumando: ");
            num2 = Convert.ToDouble(Console.ReadLine());
            res=num1+num2;
            Console.WriteLine("La suma es: {0:G}",res);
        }
        else if(op=='b')
        {
            Console.Write("Escribe el minuendo: ");
            num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Escribe el sustraendo: ");
            num2 = Convert.ToDouble(Console.ReadLine());
            res=num1-num2;
            Console.WriteLine("La resta es: {0:G}",res);
        }
        else if(op=='c')
        {
            Console.Write("Escribe primer factor: ");
            num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Escribe el segundo factor: ");
            num2 = Convert.ToDouble(Console.ReadLine());
            res=num1*num2;
            Console.WriteLine("La multiplicacion es: {0:G}",res);
        }
        else if(op=='d')
        {
            Console.Write("Escribe dividendo: ");
            num1 = Convert.ToDouble(Console.ReadLine());
            Console.Write("Escribe divisor: ");
            num2 = Convert.ToDouble(Console.ReadLine());
            res=num1/num2;
            Console.WriteLine("La division es: {0:G}",res);
        }
        else
            Console.WriteLine("Esa no es una de las opciones.");
    }
}