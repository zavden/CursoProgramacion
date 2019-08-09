#include<stdio.h>
int nvar,i;
float k1,k2;
int main()
{
    printf("Escribe el numero de variables a comparar: ");
    scanf("%d",&nvar);
    for(i=1;i<=nvar;i++)
    {
        printf("Ingresa el valor %d: ",i);
        scanf("%f",&k2);
        if(i==1||k1>=k2)
            k1=k2;
    }
    printf("El menor es: %f\n",k1);
    return 0;
}
