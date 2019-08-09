#include<stdio.h>
float calif;
int main()
{
    printf("Ingresa tu calificacion: ");
    scanf("%f",&calif);
    if(calif<6)
    {
        if(calif<0)
            printf("Esta calificacion no es valida.\n");
        else
            printf("Estas reprobado.\n");
    }
    else
    {
        if(calif>10)
            printf("Esta calificacion no es valida.\n");
        else
            printf("Estas aprobado.\n");
    }
    return 0;
}