#include<iostream>
using namespace std;
int i=2,c,mcm=1,k=1,var;
bool v,v1;
bool primo(int q){
    int s;
    for(s=2;s<q;s++){
        if(q%s==0)
            return false;
    }
    return true;
}
int sigp(int q){
    q++;
    while(!primo(q))
        q++;
    return q;
}
int main()
{
    cout<<"Ingresa numero de valores a evaluar: ";
    cin>>var;
    int n[var];
    for(c=0;c<var;c++){
        cout<<"Ingresa el valor "<<c+1<<": ";
        cin>>n[c];
    }
    do{
        do{
            v=false; v1=false;
            for(c=0;c<var;c++){
                if(n[c]%i==0){
                    if(v==false){
                        cout<<"("<<i<<")";
                        v=true;
                        k++;
                        mcm=mcm*i;
                    }
                    n[c]=n[c]/i;
                }
                else{
                    if(n[c]!=1)
                        v1=true;
                }
            }
        }while(v==true);
        i=sigp(i);
    }while(v1==true);
    if(k==1)
        cout<<"= 1"<<endl;
    else
        cout<<"= "<<mcm<<endl;
    return 0;
}