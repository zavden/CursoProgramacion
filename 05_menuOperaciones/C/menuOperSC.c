#include<stdio.h>
float num1,num2,res;
char op;
int main()
{
    printf("Elija una de las siguientes opciones:\n\n\ta) Suma.\n\tb) Resta.\n\tc) Multiplicacion.\n\td) Division.\n\n\t\t\t\t Opcion: ");
    scanf("%s",&op);
    switch(op)
    {
        case 'a':
        {
            printf("Escribe primer sumando: ");
            scanf("%f",&num1);
            printf("Escribe segundo sumando: ");
            scanf("%f",&num2);
            res=num1+num2;
            printf("La suma es: %f\n",res);
            break;
        }
        case 'b':
        {
            printf("Escribe el minuendo: ");
            scanf("%f",&num1);
            printf("Escribe el sustraendo: ");
            scanf("%f",&num2);
            res=num1-num2;
            printf("La resta es: %f\n",res);
            break;
        }
        case 'c':
        {
            printf("Escribe primer factor: ");
            scanf("%f",&num1);
            printf("Escribe segundo factor: ");
            scanf("%f",&num2);
            res=num1*num2;
            printf("El producto: %f\n",res);
            break;
        }
        case 'd':
        {
            printf("Escribe el dividendo: ");
            scanf("%f",&num1);
            printf("Escribe el divisor: ");
            scanf("%f",&num2);
            res=num1/num2;
            printf("La division es: %f\n",res);
            break;
        }
        default:
        {
            printf("Esa no es una opcion.\n");
        }
    }
    return 0;
}