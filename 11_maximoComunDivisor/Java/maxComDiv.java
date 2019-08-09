import java.util.Scanner;
public class maxComDiv{
    public static void main(String[] args){
        Scanner leer=new Scanner(System.in);
        int i=2,c,MCD=1,nv,mini;
        boolean ver=true;
        System.out.print("Ingresa numero de valores a evaluar: ");
        nv=leer.nextInt();
        int[] n=new int[nv];
        for(c=0;c<nv;c++){
            System.out.printf("Ingresa el valor %d: ",c+1);
            n[c]=leer.nextInt();
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
            if(ver==true){
                System.out.printf("(%d)",i);
                MCD=MCD*i;
                for(c=0;c<nv;c++)
                    n[c]=n[c]/i;
            }
            else{
                i=sigp(i);
                ver=true;
            }
        }while(i<=mini);
        System.out.printf("= %d\n",MCD);
    }
    public static int minimo(int m1,int m2){
        if(m1<=m2)
            return m1;
        else
            return m2;
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