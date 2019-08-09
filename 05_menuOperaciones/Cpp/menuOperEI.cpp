#include<iostream>
using namespace std;
float num1,num2,res;
char op;
int main()
{
    cout<<"Elija una de las siguientes opciones:\n\n\ta) Suma.\n\tb) Resta.\n\tc) Multiplicacion.\n\td) Division.\n\n\t\t\t\t Opcion: ";
    cin>>op;
    if(op=='a')
    {
        cout<<"Escribe primer sumando: ";
        cin>>num1;
        cout<<"Escribe segundo sumando: ";
        cin>>num2;
        res=num1+num2;
        cout<<"La suma es: "<<res<<endl;
    }
    else if(op=='b')
    {
        cout<<"Escribe el minuendo: ";
        cin>>num1;
        cout<<"Escribe el sustraendo: ";
        cin>>num2;
        res=num1-num2;
        cout<<"La resta es: "<<res<<endl;
    }
    else if(op=='c')
    {
        cout<<"Escribe primer factor: ";
        cin>>num1;
        cout<<"Escribe segundo factor: ";
        cin>>num2;
        res=num1*num2;
        cout<<"La suma es: "<<res<<endl;
    }
    else if(op=='d')
    {
        cout<<"Escribe el dividendo: ";
        cin>>num1;
        cout<<"Escribe el divisor: ";
        cin>>num2;
        res=num1/num2;
        cout<<"La suma es: "<<res<<endl;
    }
    else
        cout<<"Esa no es una opcion.\n";
    return 0;
}