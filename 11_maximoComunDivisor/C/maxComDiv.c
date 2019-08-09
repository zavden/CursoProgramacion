#include<stdio.h>
int i=2,var,MCD=1,mini,c,ver=1;
int minimo(int m1,int m2){
    if(m1<=m2)
        return m1;
    else
        return m2;
}
int primo(int k){
    int s;
    for(s=2;s<k;s++){
        if(k%s==0)
            return 0;
    }
    return 1;
}
int sigp(int k){
    k++;
    while(!primo(k))
        k++;
    return k;
}
int main(){
    printf("Ingresa numero de valores a evaluar: ");
    scanf("%d",&var);
    int n[var];
    for(c=0;c<var;c++){
        printf("Ingresa el valor %d: ",c+1);
        scanf("%d",&n[c]);
    }
    mini=n[0];
    for(c=1;c<var;c++)
        mini=minimo(mini,n[c]);
    do{
        for(c=0;c<var;c++){
            if(n[c]%i!=0){
                ver=0;
                break;
            }
        }
        if(ver==1){
            printf("(%d)",i);
            MCD=MCD*i;
            for(c=0;c<var;c++)
                n[c]=n[c]/i;
        }
        else{
            i=sigp(i);
            ver=1;
        }
    }while(i<=mini);
    printf(" = %d\n",MCD);
    return 0;
}