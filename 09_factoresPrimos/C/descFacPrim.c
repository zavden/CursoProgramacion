#include<stdio.h>
int n,j;
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
int sigp(int k)
{
    k++;
    while(primo(k)==0)
        k++;
    return k;
}
int main()
{
    printf("Ingresa un numero: ");
    scanf("%d",&n);
    if(primo(n)==1)
        printf("Es primo\n");
    else
    {
        j=2;
        do
        {
            while(n%j!=0)
                j=sigp(j);
            printf("(%d)",j);
            n=n/j;
        }while(primo(n)==0);
        printf("(%d)\n",n);
    }
}