#include<iostream>
using namespace std;
int n,j;
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
int sigp(int k)
{
    k++;
    while(!primo(k))
        k++;
    return k;
}
int main()
{
    cout<<"Ingresa un numero: ";
    cin>>n;
    if(primo(n))
        cout<<"Es primo\n";
    else
    {
        j=2;
        do
        {
            while(n%j!=0)
                j=sigp(j);
            cout<<"("<<j<<")";
            n=n/j;
        }while(!primo(n));
        cout<<"("<<n<<")\n";
    }
}