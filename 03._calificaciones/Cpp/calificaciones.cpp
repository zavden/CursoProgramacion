#include<iostream>
using namespace std;
float calif;
int main()
{
    cout<<"Ingresa tu calificacion: ";
    cin>>calif;
    if(calif<6)
    {
        if(calif<0)
            cout<<"Esta calificacion no es valida.\n";
        else
            cout<<"Estas reprobado.\n";
    }
    else
    {
        if(calif>10)
            cout<<"Esta calificacion no es valida.\n";
        else
            cout<<"Estas aprobado.\n";
    }
    return 0;
}