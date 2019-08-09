#include<stdio.h>
int n,i,comp=0;
int main()
{
	printf("Ingresa un numero: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            comp=1;
            printf("No es primo\n");
            break;
        }
    }
    if(comp==0)
        printf("Es primo\n");
    return 0;
}