import java.util.Scanner;            //Inclusion de paqueteria entrada/salida
public class sumaDosNumeros
{
    public static void main(String[] args)
    {
        Scanner lectura=new Scanner(System.in);     //Creacion de objeto lectura
        float num1,num2,suma;                       //Declaracion de variables
        System.out.print("Este programa suma dos numeros\n");
        System.out.print("Ingresa primer numero: ");
        num1=lectura.nextFloat();                   //Lectura de valor num1
        System.out.print("Ingresa segundo numero: ");
        num2=lectura.nextFloat();                   //Lectura de valor num2
        suma=num1+num2;                             //Operacion suma
        System.out.println("La suma es: "+suma);    //Impresion de resultado
    }
}