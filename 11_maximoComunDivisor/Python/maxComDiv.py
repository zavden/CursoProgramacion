def minimo(m1,m2):
    if m1<=m2:
        return m1
    else:
        return m2
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
MCD=int(1)
var=int(input("Ingresa numero de valores a evaluar: "))
n=[]
ver=True
for c in range(0,var):
    n.append(int(input("Ingresa el valor %d: "%(c+1))))
mini=n[0]
for c in range(1,var):
    mini=minimo(mini,n[c])
while True:
    for c in range(0,var):
        if n[c]%i!=0:
            ver=False
            break
    if ver:
        print("(%d)"%(i))
        MCD=MCD*i
        for c in range(0,var):
            n[c]=n[c]/i
    else:
        i=sigp(i)
        ver=True
    if i>mini:
        break;
print(" = %d"%(MCD))