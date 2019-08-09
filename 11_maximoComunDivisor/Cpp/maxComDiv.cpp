#include<iostream>
using namespace std;
int i=2,var,MCD=1,mini,c;
bool ver=true;
int minimo(int m1,int m2){
    if(m1<=m2)
        return m1;
    else
        return m2;
}
bool primo(int k){
    int s;
    for(s=2;s<k;s++){
        if(k%s==0)
            return false;
    }
    return true;
}
int sigp(int k){
    k++;
    while(!primo(k))
        k++;
    return k;
}
int main(){
    cout<<"Ingresa numero de valores a evaluar: ";
    cin>>var;
    int n[var];
    for(c=0;c<var;c++){
        cout<<"Ingresa el valor "<<c+1<<": ";
        cin>>n[c];
    }
    mini=n[0];
    for(c=1;c<var;c++)
        mini=minimo(mini,n[c]);
    do{
        for(c=0;c<var;c++){
            if(n[c]%i!=0){
                ver=false;
                break;
            }
        }
        if(ver==true){
            cout<<"("<<i<<")";
            MCD=MCD*i;
            for(c=0;c<var;c++)
                n[c]=n[c]/i;
        }
        else{
            i=sigp(i);
            ver=true;
        }
    }while(i<=mini);
    cout<<"="<<MCD<<endl;
    return 0;
}