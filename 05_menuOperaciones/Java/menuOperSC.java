import java.util.Scanner;
public class menuOperSC
{
    public static void main(String[] args){
        Scanner leer=new Scanner(System.in);
        float num1,num2,res;
        char op;
        System.out.print("Elige opcion:\na) Suma. \nb) Resta.\nc) Multiplicacion.\nd) Division.\n Elige Opcion: ");
        op= leer.next().charAt(0);
        switch (op)
        {
            case 'a':
            {
                System.out.print("Escribe el primer sumando: ");
                num1=leer.nextFloat();
                System.out.print("Escribe el segundo sumando: ");
                num2=leer.nextFloat();
                res=num1+num2;
                System.out.println("La suma es: "+res);
                break;
            }
            case 'b':
            {
                System.out.print("Escribe minuendo: ");
                num1=leer.nextFloat();
                System.out.print("Escribe sustraendo: ");
                num2=leer.nextFloat();
                res=num1-num2;
                System.out.println("La resta es: "+res);
                break;
            }
            case 'c':
            {
                System.out.print("Escribe el primer factor: ");
                num1=leer.nextFloat();
                System.out.print("Escribe el segundo factor: ");
                num2=leer.nextFloat();
                res=num1*num2;
                System.out.println("La multiplicacion es: "+res);
                break;
            }
            case 'd':
            {
                System.out.print("Escribe divisor: ");
                num1=leer.nextFloat();
                System.out.print("Escribe dividendo: ");
                num2=leer.nextFloat();
                res=num1/num2;
                System.out.println("La division es: "+res);
            }
            default:
            {
                System.out.println("Esa no es una opcion.");
                break;
            }
        }
    }
}