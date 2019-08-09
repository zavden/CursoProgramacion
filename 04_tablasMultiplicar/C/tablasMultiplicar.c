#include<stdio.h>
int i,j;
int main()
{
    printf("Ingresa el numero de la tabla que deseas conocer: ");
    scanf("%d",&j);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",j,i,i*j);
    }
    return 0;
}