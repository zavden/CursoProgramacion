import java.util.Scanner;
public class calificaciones
{
    public static void main(String[] args)
    {
        Scanner leer=new Scanner(System.in);
        float calif;
        System.out.print("Ingresa tu calificacion: ");
        calif=leer.nextFloat();
        if(calif<6)
        {
            if(calif<0)            //Si calif<0 Imprime que no es valida
                System.out.println("Tu calificacion no es valida.");
            else                    //Caso calif>=0
                System.out.println("Estas reprobado.");
        }
        else
        {
            if(calif>10)            //Si calif>10
                System.out.println("Tu calificacion no es valida.");
            else                    //Caso calif<=10
                System.out.println("Estas aprobado.");
        }
    }
}