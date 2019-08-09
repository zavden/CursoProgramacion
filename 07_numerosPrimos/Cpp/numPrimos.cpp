#include<iostream>
using namespace std;
int n,i;
bool comp=false;
int main()
{
	cout<<"Ingresa un numero: ";
	cin>>n;
	for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            comp=true;
            cout<<"No es primo\n";
            break;
        }
    }
    if(!comp)
        cout<<"Es primo\n";
    return 0;
}
