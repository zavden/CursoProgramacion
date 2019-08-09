
#include<stdio.h>
float num1,num2,suma;               //Declaracion de variables flotantes
int main(void)
{
    printf("Este programa suma dos numeros\n");
    printf("Ingrese primer numero: ");
    scanf("%f",&num1);              //Lectura de valor num1
    printf("Ingrese segundo numero: ");
    scanf("%f",&num2);              //Lectura de valor num2
    suma=num1+num2;                 //Operacion suma
    printf("La suma es: %f\n",suma);  //Impresion de resultado
    return 0;
}