def primo(k):
    for i in range(2,k):
        if k%i==0:
            return False
    return True
def sigp(h):
    h=int(h+1)
    while (not primo(h)):
        h=int(h+1)
    return h
n=int(input("Ingresa un numero: "))
if primo(n):
        print("Es primo\n")
else:
    j=int(2)
    while True:
        while n%j!=0:
            j=sigp(j)
        print("(%d)"%(j))
        n=int(n/j)
        if primo(n):
            break
    print("(%d)"%(n))