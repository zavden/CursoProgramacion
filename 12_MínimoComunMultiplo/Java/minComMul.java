import java.util.Scanner;
public class minComMul {
    public static void main(String[] args){
        Scanner leer=new Scanner(System.in);
        int i=2,c,mcm=1,k=1,nv;
        boolean v,v1;
        System.out.print("Ingresa numero de valores a evaluar: ");
        nv=leer.nextInt();
        int[] n=new int[nv];
        for(c=0;c<nv;c++){
            System.out.printf("Ingresa el valor %d: ",c+1);
            n[c]=leer.nextInt();
        }
        do{
            do{
                v=false; v1=false;
                for(c=0;c<nv;c++){
                    if(n[c]%i==0){
                        if(v==false){
                            System.out.printf("(%d)",i);
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
            System.out.print("= 1\n");
        else
            System.out.printf("= %d\n",mcm);
    }
    public static boolean primo(int k){
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