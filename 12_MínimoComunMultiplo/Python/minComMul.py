def primo(k):
    for i in range(2,k):
        if int(k%i)==0:
            return False
    return True
def sigp(h):
    h=int(h+1)
    while (not primo(h)):
        h=int(h+1)
    return h
i=int(2)
k=int(1)
mcm=int(1)
var=int(input("Ingresa numero de valores a evaluar: "))
n=[]
for c in range(var):
    n.append(int(input("Ingresa el valor %d: "%(c+1))))
while True:
    while True:
        v=False
        v1=False
        for c in range(var):
            if n[c]%i==0:
                if v==False:
                    print("(%d)"%(i))
                    k=k+1
                    mcm=mcm*i
                    v=True
                n[c]=n[c]/i
            else:
                if n[c]!=1:
                    v1=True
        if v==False:
            break
    i=sigp(i)
    if v1==False:
        break
if k==1:
    print("= 1")
else:
    print("= %d"%(mcm))