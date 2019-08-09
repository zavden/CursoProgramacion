#include<iostream>
using namespace std;
int num;
int main()
{
    cout<<"Ingresa un numero: ";
    cin>>num;
    if(num%2==0)
        cout<<num<<" es par\n";
    else
        cout<<num<<" es impar\n";
    return 0;
}