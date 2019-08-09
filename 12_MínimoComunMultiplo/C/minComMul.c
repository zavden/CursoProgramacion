#include<stdio.h>
int i=2,c,mcm=1,k=1,var,v,v1;
int primo(int q){
    int s;
    for(s=2;s<q;s++){
        if(q%s==0)
            return 0;
    }
    return 1;
}
int sigp(int q){
    q++;
    while(primo(q)==0)
        q++;
    return q;
}
int main()
{
    printf("Ingresa numero de valores a evaluar: ");
    scanf("%d",&var);
    int n[var];
    for(c=0;c<var;c++){
        printf("Ingresa el valor %d: ",c+1);
        scanf("%d",&n[c]);
    }
    do{
        do{
            v=0; v1=0;
            for(c=0;c<var;c++){
                if(n[c]%i==0){
                    if(v==0){
                        printf("(%d)",i);
                        v=1;
                        k++;
                        mcm=mcm*i;
                    }
                    n[c]=n[c]/i;
                }
                else{
                    if(n[c]!=1)
                        v1=1;
                }
            }
        }while(v==1);
        i=sigp(i);
    }while(v1==1);
    if(k==1)
        printf(" = 1");
    else
        printf(" = %d\n",mcm);
    return 0;
}