using System;
public class minComMul{
    public static void Main(String[] args){
        int i=2,c,mcm=1,k=1,nv;
        bool v,v1;
        Console.Write("Ingresa numero de valores a evaluar: ");
        nv=Convert.ToInt32(Console.ReadLine());
        int[] n=new int[nv];
        for(c=0;c<nv;c++){
            Console.Write("Ingresa el valor {0}: ",c+1);
            n[c]=Convert.ToInt32(Console.ReadLine());
        }
        do{
            do{
                v=false; v1=false;
                for(c=0;c<nv;c++){
                    if(n[c]%i==0){
                        if(v==false){
                            Console.Write("({0})",i);
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
            Console.WriteLine("= 1");
        else
            Console.WriteLine("= {0}",mcm);
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