#include<iostream>
using namespace std;
int j;
bool primo(int k)
{
    int i;
    for(i=2;i<k;i++)
    {
        if(k%i==0)
            return false;
    }
    return true;
}
int main()
{
    cout<<"Ingresa un numero: ";
    cin>>j;
    j++;
    while(!primo(j))
        j++;
    cout<<"El siguiente primo es: "<<j<<endl;
    return 0;
}