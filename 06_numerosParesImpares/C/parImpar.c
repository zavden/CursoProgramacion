#include<stdio.h>
int num;
int main()
{
    printf("Ingresa numero: ");
    scanf("%d",&num);
    if(num%2==0)
        printf("%d es par\n",num);
    else
        printf("%d es impar\n", num);
    return 0;
}