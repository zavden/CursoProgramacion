using System;
public class maxComDiv{
    public static void Main(String[] args){
        int i=2,c,MCD=1,nv,mini;
        bool ver=true;
        Console.Write("Ingresa numero de valores a evaluar: ");
        nv=Convert.ToInt32(Console.ReadLine());
        int[] n=new int[nv];
        for(c=0;c<nv;c++){
            Console.Write("Ingresa el valor {0}: ",c+1);
            n[c]=Convert.ToInt32(Console.ReadLine());
        }
        mini=n[0];
        for(c=1;c<nv;c++)
            mini=minimo(mini,n[c]);
        do{
            for(c=0;c<nv;c++){
                if(n[c]%i!=0){
                    ver=false;
                    break;
                }
            }
            if(ver){
                Console.Write("({0})",i);
                MCD=MCD*i;
                for(c=0;c<nv;c++)
                    n[c]=n[c]/i;
            }
            else{
                i=sigp(i);
                ver=true;
            }
        }while(i<=mini);
        Console.Write("= {0}",MCD);
    }
    public static int minimo(int m1,int m2){
        if(m1<=m2)
            return m1;
        else
            return m2;
    }
    public static bool primo(int k){
        int i;
        for(i=2;i<k;i++){
            if(k%i==0)
                return false;
        }
        return true;
    }
    public static int sigp(int k){
        k++;
        while(!primo(k))
            k++;
        return k;
    }
}