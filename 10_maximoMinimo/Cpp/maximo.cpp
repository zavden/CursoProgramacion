#include<iostream>
using namespace std;
float k1,k2;
int nvar,i;
int main()
{
    cout<<"Escribe el numero de variables a comparar: ";
    cin>>nvar;
    for(i=1;i<=nvar;i++)
    {
        cout<<"Ingresa el valor "<<i<<": ";
        cin>>k2;
        if(i==1||k1<=k2)
            k1=k2;
    }
    cout<<"El mayor es: "<<k1<<endl;
    return 0;
}