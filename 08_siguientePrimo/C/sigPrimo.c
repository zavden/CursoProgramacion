#include<stdio.h>
int j;
int primo(int k)
{
    int i;
    for(i=2;i<k;i++)
    {
        if(k%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    printf("Ingresa un numero: ");
    scanf("%d",&j);
    j++;
    while(primo(j)==0)
        j++;
    printf("El siguiente primo es: %d\n",j);
    return 0;
}