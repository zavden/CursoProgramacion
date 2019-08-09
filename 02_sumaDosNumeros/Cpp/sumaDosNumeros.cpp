
#include<iostream>
float num1,num2,suma;                    //Declaracion de variables
using namespace std;
int main()
{
    cout<<"Este programa suma dos numeros\n";
    cout<<"Ingresa primer numero: ";
    cin>>num1;                           //Lectura de valor num1
    cout<<"Ingresa segundo numero: ";
    cin>>num2;                           //Lectura de valor num2
    suma=num1+num2;                      //Operacion suma
    cout<<"El resultado es: "<<suma<<endl;     //Impresion de resultado
    return 0;
}