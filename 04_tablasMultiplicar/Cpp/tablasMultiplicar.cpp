#include<iostream>
using namespace std;
int i,j;
int main()
{
    cout<<"Ingresa el numero de la tabla que deseas conocer: ";
    cin>>j;
    for(i=1;i<=10;i++)
    {
        cout<<j<<" x "<<i<<" = "<<i*j<<endl;
    }
    return 0;
}